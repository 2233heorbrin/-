#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
    printf("**********************\n");
    printf("**** 1.play,0.exit****\n");
    printf("*********************\n");
}
//RAND_MAX-32767
void game()
{
    int ret = 0;
    int guess = 0;
    ret = rand()%100+1;//生成一个1~100的随机数.
    while (1)//进入循环，猜完后才退出。
    {
        printf("请猜数字:>");
        scanf_s("%d", &guess);
        if (guess > ret)
        {
            printf("猜大了\n");
        }
        else if (guess < ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你，猜对了\n");
            break;
        }
    }
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));//开始游戏后，设置一个随机数的起点
    do
    {
        menu();
        printf("请选择>:");
        scanf_s("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
        default:
            printf("选择错误\n");
            break;
        }
    }
    while (input);
    return 0;
    }