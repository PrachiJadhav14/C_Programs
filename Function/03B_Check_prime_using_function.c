#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Ret = 0;

    printf("\n Enter a Postive Number = ");
    scanf("%d",&No);

    Ret = is_prime(No);

    if(Ret==1)
    {
        printf("\n Given %d is Prime.",No);
    }
    else
    {
        printf("\n Given %d is Not Prime.",No);
    }

    getch();
    return 0;
}

   int is_prime(int Num)
 {
     int i=0;

     for(i=2; i < Num;i++)
     {
        if(Num % i ==0)
        {
            return 0;
        }
     }
     return 1;
 }
