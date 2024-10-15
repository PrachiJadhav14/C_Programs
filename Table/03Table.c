#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, i = 0;

    printf("\n Enter A Number = ");
    scanf("%d",&No);

    printf("\n Table Of %d is =>\n",No);

    printf("\n===============************===========");

    for(i=1;i<=10;i++)
    {
        printf("\n\t %d",No*i);
    }
    printf("\n Thanks!!!");

    printf("\n=================************================");

    getch();
    return 0;
}
