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
    ret = rand()%100+1;//����һ��1~100�������.
    while (1)//����ѭ�����������˳���
    {
        printf("�������:>");
        scanf_s("%d", &guess);
        if (guess > ret)
        {
            printf("�´���\n");
        }
        else if (guess < ret)
        {
            printf("��С��\n");
        }
        else
        {
            printf("��ϲ�㣬�¶���\n");
            break;
        }
    }
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));//��ʼ��Ϸ������һ������������
    do
    {
        menu();
        printf("��ѡ��>:");
        scanf_s("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
        default:
            printf("ѡ�����\n");
            break;
        }
    }
    while (input);
    return 0;
    }