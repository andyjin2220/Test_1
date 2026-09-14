#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_num;
int guess_num;
int t;

int return_random_num() //랜덤한 숫자 리턴
{
    srand(time(NULL));
    return random_num = 1 + rand() % (100);
}

int compare()   //랜덤한 숫자와 추측숫자 비교
{
    if (guess_num > 100 || guess_num < 1)
    {
        printf("1과 100 사이의 숫자를 입력하세요.\n");
    }
    else if (random_num > guess_num)
    {
        printf("%d보다 큰 숫자 입니다\n", guess_num);
        t++;
    }
    else if (random_num < guess_num)
    {
        printf("%d보다 작은 숫자 입니다\n", guess_num);
        t++;
    }
    else if (random_num == guess_num)
    {
        t++;
        printf("정답입니다! %d번 만에 맞췄습니다.\n",t);
        return 1;
    }
    return 0;
}

void guess()
{
    random_num = return_random_num();
    printf("숫자 추측 게임을 시작합니다! (1~100 사이)\n");
    while (1)
    {
        printf("숫자를 맞춰보세요 (1~100): ");
        scanf("%d", &guess_num);
        if (compare() == 1) //비교 함수에서 반환한 값에 따라 중지 여부 확인
        {
            break;
        }
    }
}

int main()
{
    guess();
}