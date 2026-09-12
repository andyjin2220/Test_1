#include <stdio.h>

int triangle_height = 0; // 역삼각형의 행 수
char sign;               // 내부를 채울 기호

void Printing_Heart(int h, char s)
{
    // 반원 출력 부분
    int c_h = h / 3; // 반원 높이
    for (int i = 0; i < c_h; i++)
    {
        for (int j = 0; j < c_h - i - 1; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 0; j < (h - 2 * c_h - 1) + 2 * i; j++) // 맨 아래줄부터 역산해서 첫줄에 사용되는 기호의 수를 계산
        {
            printf("%c", s);
        }
        printf("*");
        for (int j = 0; j < c_h - i - 1; j++)
        {
            printf(" ");
        }

        printf(" ");

        // 반복
        for (int j = 0; j < c_h - i - 1; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 0; j < (h - 2 * c_h - 1) + 2 * i; j++)
        {
            printf("%c", s);
        }
        printf("*");
        for (int j = 0; j < c_h - i - 1; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    // 역삼각형 출력 부분
    for (int i = 0; i < h; i++) // i : 공백 개수
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 0; j < (2 * h - 3 - 2 * i); j++) // j: 기호 개수
        {
            printf("%c", s);
        }
        if (i != h - 1) // 마지막 줄에는 * 한개만 출력
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    scanf("%d %c", &triangle_height, &sign);
    Printing_Heart(triangle_height, sign);
    return 0;
}