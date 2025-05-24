
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0,MinDig=0,Dig = 0,Temp=0;

    printf("\n Enter An integer Number: ");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp>0)
    {
        Dig =Temp%10;

        if(Dig> MinDig)
        {
            MinDig = Dig;
        }
        Temp = Temp/10;

    }
    printf("\n The Minimum Dig in %d is :%d\n",Num,MinDig);
    return 0;
}
