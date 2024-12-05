///Area Of Circle
#include<stdio.h>
#include<conio.h>
int main()
    {
       float Radius=0,pi=3.14;
       printf("\n Enter Radius => ");
       scanf("%f",&Radius);
       Radius=pi*Radius*Radius;

       printf("\n Area is: %f", Radius,Radius);

       getch();
       return 0;
    }

