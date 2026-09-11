#include <stdio.h>

int runCafeProgram()
{
    // 메뉴판 출력
    printf("=== 메뉴 ===\n");
    printf("1. 아메리카노 (3,000원)\n");
    printf("2. 카푸치노 (4,000원)\n");
    printf("3. 카라멜 마끼야또 (6,000원)\n");
    printf("4. 녹차 라떼 (5,000원)\n");
    printf("5. 딸기 스무디 (4,000원)\n");
    printf("6. 달고나 라떼 (2,000원)\n");
    printf("7. 종료\n");
    printf("===========");
    int total_price = 0; // 총 금액 저장 변수

    while (1)
    {
        int choice = 0;
        printf("메뉴를 선택해주세요 : ");
        scanf("%d", &choice);

        // switch 함수를 이용해서 선택
        switch (choice)
        {
        case 1:
            printf("아메리카노를 선택하셨습니다. (3,000원)\n\n");
            total_price += 3000;
            break;
        case 2:
            printf("카푸치노를 선택하셨습니다. (4,000원)\n\n");
            total_price += 4000;
            break;
        case 3:
            printf("카라멜 마끼야또를 선택하셨습니다. (6,000원)\n\n");
            total_price += 6000;
            break;
        case 4:
            printf("녹차라떼를 선택하셨습니다. (5,000원)\n\n");
            total_price += 5000;
            break;
        case 5:
            printf("딸기 스무디를 선택하셨습니다. (4,000원)\n\n");
            total_price += 4000;
            break;
        case 6:
            printf("달고나 라떼를 선택하셨습니다. (2,000원)\n\n");
            total_price += 2000;
            break;
        case 7:
            printf("프로그램을 종료합니다.\n");
            printf("총 금액은 %d원 입니다.\n", total_price);
            return 0;
        default:
            printf("잘못된 선택입니다. 1에서 7 사이의 숫자를 입력해주세요.\n\n");
            break;
        }
    }
}

int main()
{
    runCafeProgram();
    return 0;
}