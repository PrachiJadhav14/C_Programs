
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,cnt=0,Dig=0,Temp=0;

    printf("\n Enter a Number ");
    scanf("%d",&No);

    Temp =No;
    while(Temp>0)
    {
        Dig = Temp%10;
        if(Dig%2==1)
        {
            Ocnt++;
        }
        Temp = Temp/10;
    }
   printf("\n Count Of Odd Digit is %d = %d",No,Ocnt);
    getch ();
    return 0;
}
