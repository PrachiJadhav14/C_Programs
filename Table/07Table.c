///Program to print reverse table.
#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0, i = 0;

  printf ("\n Enter A Number = ");
  scanf ("%d",&No);

  printf("\n Table Of %d is  => \n",No);


  for(i = 10 ; i >= 1; i--)
  {
    printf("\n %d",No*i);
  }
  printf ("\n Thanks!!!");

  getch();
  return 0;
}
