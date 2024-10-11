#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Temp = 0, zcnt = 0,Dig=0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);

    for(Temp = No; Temp > 0; Temp /= 10)
    {
        Dig = Temp%10;
        if((Dig%2)== 0 )
        {
            zcnt++;
        }

    }
    printf("\n Zero Count in %d = %d",No,zcnt);

    getch();
    return 0;
}
