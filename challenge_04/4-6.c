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
    exit(0);
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
    int menu;
    Contact data[50] = {0};

    while (1)
    {
        ShowMenu(), scanf("%d", &menu);
        getchar();
        SelectMenu(menu);
        printf("\n");
    }

    return 0;
}