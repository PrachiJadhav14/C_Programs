#include<stdio.h>
#include<conio.h>

  int sum (int a , int b);            //Declaration

  int main()
    {
        int  a = 0 , b = 0;
        printf("\n Enter First Number => ");
        scanf("%d",&a);

        printf("\n Enter Second Number => ");
        scanf("%d",&b);

        int s = sum (a,b);                      //function Calling
        printf("Sum is : %d", s);
        return 0;
    }

    int sum (int x,int y)                       ///Function Defination
    {
        return x + y;
    }
