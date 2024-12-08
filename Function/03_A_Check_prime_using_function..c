#include<stdio.h>
#include<conio.h>
typedef int Bool;
#define True 1
#define False 0

Bool is_prime(int);

  int main()
  {
     int No =0;
     Bool BRet=False;

     printf("\n Enter a Positive Number =");
     scanf("%d",&No);

     BRet=is_prime(No);

     if(BRet==True)
     {
         printf("\n Given %d is prime.",No);
     }
     else
     {
         printf("\n Given %d is Not prime.",No);
     }

     getch();
     return 0;
  }
    Bool is_prime(int Num)
    {
        int i=0;

        for(i=2; i< Num;i++)

        {
          if(Num % i == 0)
          {
            return False;
          }
        }
        return True;
    }
