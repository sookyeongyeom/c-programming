#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[30];
    char phone[30];
} Contact;

int index = 0;
Contact data[50] = {0};
int isExit = 0;

void Create()
{
    Contact new;
    puts("[ INSERT ]");
    printf("Input Name: "), gets(new.name);
    printf("Input Tel Number: "), gets(new.phone);
    data[index] = new;
    index++;
    printf("\t\tData Inserted !\n");
}

void Delete()
{
    char name[30];
    int k = 0;

    puts("[ DELETE ]");
    printf("Delete Name: "), scanf("%s", name);

    for (int i = 0; i < index; i++)
    {
        if (!strcmp(data[i].name, name))
        {
            for (int j = i; j < index; j++)
                data[j] = data[j + 1];
            index--;
            printf("\t\tData Deleted !\n");
            return;
        }
    }
    printf("존재하지 않는 연락처입니다.\n");
}

void Search()
{
    char name[30];
    int k = 0;

    puts("[ SEARCH ]");
    printf("Search Name: "), scanf("%s", name);
    puts("[ RESULT ]");

    for (int i = 0; i < index; i++)
    {
        if (!strcmp(data[i].name, name))
        {
            printf("Name: %s\tTel: %s\n", data[i].name, data[i].phone);
            printf("\t\tData Found !\n");
            return;
        }
    }
    printf("존재하지 않는 연락처입니다.\n");
}

void ShowAll()
{
    puts("[ PRINT ALL DATA ]");
    for (int i = 0; i < index; i++)
    {
        printf("Name: %s\tTel: %s\n", data[i].name, data[i].phone);
    }
    printf("\t\tData Printed !\n");
}

void Exit()
{
    puts("[ EXIT ]");
    puts("프로그램이 종료됩니다.");
    isExit = 1;
    return;
}

void ShowMenu()
{
    puts("***** MENU *****");
    puts("1. Insert");
    puts("2. Delete");
    puts("3. Search");
    puts("4. Print All");
    puts("5. Exit");
    printf("Choose the item: ");
}

void SelectMenu(int menu)
{
    switch (menu)
    {
    case 1:
        Create();
        break;
    case 2:
        Delete();
        break;
    case 3:
        Search();
        break;
    case 4:
        ShowAll();
        break;
    case 5:
        Exit();
        return;
    }
}

int main()
{
    int menu, i;
    FILE *fp1 = fopen("contact.bin", "rb");
    FILE *fp2 = fopen("contact.bin", "wb");

    while (1)
    {
        fread((void *)&data, sizeof(Contact), 50, fp1);
        if (fgetc(fp1) == EOF)
            break;
    }
    printf("이전 정보를 불러왔습니다.\n");
    index = 3;

    while (1)
    {
        ShowMenu(), scanf("%d", &menu);
        getchar();
        SelectMenu(menu);
        printf("\n");
        if (isExit)
            break;
    }

    while (1)
    {
        fwrite((void *)&data, sizeof(Contact), 50, fp2);
        if (fgetc(fp2) == EOF)
            break;
    }
    printf("변경된 정보를 저장하였습니다.");
    return 0;
}

// 진행 상황
// 구조체를 통째로 바이너리 저장하는 방향으로 접근했는데
// 제대로 저장안되는 듯 (아마 참조한 메모리가 해제된 듯)
// 복사해서 그대로 저장했다가 불러올 수 있게 구현할 것
// index도 저장 필요