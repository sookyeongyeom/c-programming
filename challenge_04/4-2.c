#include <stdio.h>

typedef struct
{
    char title[50];
    char author[30];
    int pages;
} Book;

int main()
{
    Book book1, book2, book3; // 구조체 포인터 배열 선언 전 안에 들어갈 Book 요소의 실체를 선언해주어야함
    Book *ptr[3] = {&book1, &book2, &book3};

    for (int i = 0; i < 3; i++)
    {
        printf("책%d 제목 = ", i + 1), gets(ptr[i]->title); // gets()는 버퍼에 \n을 남기지 않으므로 비워줄 필요 없음
        printf("책%d 저자 = ", i + 1), gets(ptr[i]->author);
        printf("책%d 페이지수 = ", i + 1), scanf("%d", &ptr[i]->pages);
        getchar(); // scanf()는 버퍼에 \n을 남기므로 이후 gets() 사용을 위해 버퍼 비워줌 (gets()는 개행 단위로 입력을 인식함)
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("제목 = %s\n", ptr[i]->title);
        printf("저자 = %s\n", ptr[i]->author);
        printf("페이지수 = %d\n", ptr[i]->pages);
    }

    return 0;
}