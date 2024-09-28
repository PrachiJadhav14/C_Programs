
///Program to print Fibonaccie series

#include<stdio.h>
#include<conio.h>
int main()
{
 int No1 = 1, No2 = 0, No3 = 0, cnt = 0;
 printf("\n Enter Count For Fibonacci Serires = ");
 scanf("%d",&cnt);
 printf("\n Fibonacci Serires Of Given Count =");
 while (cnt > 0)
 {
   printf("\t %d",No3);

   No3 = No1 + No2;

   No1 = No2;
   No2 = No3;
   cnt--;
 }
getch();
return 0;
}
