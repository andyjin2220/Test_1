#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int row, col;
char input;
struct pos
{
    int y;
    int x;
}; // 좌표 구조체
struct pos player;
struct pos destination;

void print_map(char new_map[col][row]) // 맵 출력 함수
{
    new_map[player.y][player.x] = 'P';
    new_map[destination.y][destination.x] = 'D';
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%c", new_map[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < col; i++) // 맵 초기화
    {
        for (int j = 0; j < row; j++)
        {
            new_map[i][j] = '.';
        }
    }
}

int play(int x, int y)
{

    char map[y][x];
    srand(time(NULL));
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            map[i][j] = '.';
        }
    }
    while (1) // 플레이어 위치와 도착지 설정
    {
        player = (struct pos){rand() % (y), rand() % (x)};
        destination = (struct pos){rand() % (y), rand() % (x)};
        if (!(player.x == destination.x && player.y == destination.y))
        {
            break;
        }
    }
    print_map(map);
    while (1)
    {
        printf("이동할 방향을 입력하세요.\n");
        printf(" (w: 위 , s: 아래 , a: 왼쪽 , d: 오른쪽):");
        scanf(" %c", &input);
        printf("\n");

        if (input == 'w') // 플레이어 이동 코드
        {
            if (player.y > 0)
            {
                player.y--;
            }
        }
        else if (input == 'a')
        {
            if (player.x > 0)
            {
                player.x--;
            }
        }
        else if (input == 's')
        {
            if (player.y < y - 1)
            {
                player.y++;
            }
        }
        else if (input == 'd')
        {
            if (player.x < x - 1)
            {
                player.x++;
            }
        }
        system("clear");
        print_map(map);
        if (player.x == destination.x && player.y == destination.y)
        {
            printf("도착지에 도착했습니다!\n");
            return 0;
        }
    }
}

int main()
{
    scanf("%d %d", &row, &col);
    play(row, col);
    return 0;
}