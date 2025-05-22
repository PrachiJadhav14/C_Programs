#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    int Ecnt = 0,Dig=0,Temp = 0;

    printf("|n Enter a Number =>");
    scanf("%d",&No);

    Temp = 0;

    while(Temp>0)
    {
        Dig=Temp%10;
        if((dig%2==0)&&(Dig!=0))
        {
            ECnt++;
        }
         Temp = Temp/10;
    }
    printf("\n Count Of Even Digit %d=is %d",No,Ecnt);
    getch();
    return 0;
}
