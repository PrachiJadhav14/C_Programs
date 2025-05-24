#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Dcnt= 0,Temp = 0;
    printf("\n Enter A Number =>");
    scanf("%d",&No);

    Temp = 0;

    while(Temp>0)
    {
        Dcnt++;
        Temp = Temp/10;
    }

    printf("\n Count Of Digit in %d=%d",No,Dcnt);
    getch();
    return 0;
}
