#include <stdio.h>

int num;
int check_digits = 0;
int digits = 1;
int num_list[50]; // C언어에서 최대로 받을 수 있는 자릿수가 38자리를 넘지 않으므로 50으로 설정

int check_palindrome()
{
    printf("자연수를 입력하세요: ");
    scanf(" %d", &num); //입력이 10자리를 넘어가면 오버플로우가 남
    check_digits = num;
    while (1) // num의 자릿수 확인 & 자릿수별 숫자 저장
    {
        num_list[digits - 1] = check_digits % 10; // 10으로 나눈 나머지, 즉 자릿수를 배열에 저장
        check_digits /= 10;                       // 10으로 나눈 몫으로 수정
        if (check_digits == 0)
        {
            break;
        }
        else
        {
            digits++;
        }
    }
    for (int i = 0; i < digits; i++) // 회문 확인 코드
    {
        if (num_list[i] != num_list[digits - 1 - i])
        {
            printf("이 숫자는 회문이 아닙니다.\n");
            return 0;
        }
    }
    printf("이 숫자는 회문입니다.\n");
    return 0;
}

int main()
{
    check_palindrome();
}