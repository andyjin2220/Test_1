#include <stdio.h>

int num = 0;
int mid = 0; // 반환점

void funtion(int n)
{

    for (int i = 0; i < n; i++)
    {

        if (n % 2 != 0) // 홀수 케이스
        {
            mid = (n + 1) / 2; // 반환점 확인
            if (i + 1 <= mid)  // 이전
            {
                for (int j = 0; j < i; j++)
                {
                    printf(" ");
                }
                printf("%d", i + 1);
                for (int j = 0; j < (n - 2 - 2 * i); j++) // 가운데 공백
                {
                    printf(" ");
                }
                if (i + 1 != mid)
                {
                    printf("%d", n - i);
                }
            }
            else // 이후
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    printf(" ");
                }
                printf("%d", n - i);
                for (int j = 0; j < 2 * i - n; j++)
                {
                    printf(" ");
                }
                printf("%d", i + 1);
            }
            printf("\n");
        }
        else // 짝수
        {
            mid = n / 2;      // 반환점 확인
            if (i + 1 <= mid) // 이전
            {
                for (int j = 0; j < i; j++)
                {
                    printf(" ");
                }
                printf("%d", i + 1);
                for (int j = 0; j < (n - 2 - 2 * i); j++) // 가운데 공백
                {
                    printf(" ");
                }
                printf("%d", n - i);
            }
            else // 이후
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    printf(" ");
                }
                printf("%d", n - i);
                for (int j = 0; j < 2 * i - n; j++)
                {
                    printf(" ");
                }
                printf("%d", i + 1);
            }
            printf("\n");
        }
    }
}

int main()
{
    scanf("%d", &num);
    funtion(num);
    return 0;
}