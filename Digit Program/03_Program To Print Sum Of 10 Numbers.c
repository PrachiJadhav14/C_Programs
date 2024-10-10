///Program to print sum of 10 inputed numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
  int Bill = 0, Total = 0, Cnt = 0;
  printf("\n Enter 10 Bill Amount =>\n");

  for( Cnt=1;Cnt<=10;Cnt++)
  {
    printf("\n Enter Bill %d=",Cnt);
    scanf("\n%d",&Bill);
    Total = Total + Bill;
  }
}p
