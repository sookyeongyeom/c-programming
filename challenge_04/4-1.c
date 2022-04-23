#include <stdio.h>

typedef struct
{
    char title[50];
    char author[30];
    int pages;
} Book;

int main()
{
    Book books[3];

    for (int i = 0; i < 3; i++)
    {
        printf("책%d 제목 = ", i + 1), gets(books[i].title); // gets()는 버퍼에 \n을 남기지 않으므로 비워줄 필요 없음
        printf("책%d 저자 = ", i + 1), gets(books[i].author);
        printf("책%d 페이지수 = ", i + 1), scanf("%d", &books[i].pages);
        getchar(); // scanf()는 버퍼에 \n을 남기므로 이후 gets() 사용을 위해 버퍼 비워줌 (gets()는 개행 단위로 입력을 인식함)
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("제목 = %s\n", books[i].title);
        printf("저자 = %s\n", books[i].author);
        printf("페이지수 = %d\n", books[i].pages);
    }

    return 0;
}