/// Program to print left lower patter using digit.

#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0,x=0;

  for (i = 1,x=1;i<=5; i++)
  {
    for (j=1 ; j<=5; j++)
    {
      if(i==j || i>=j)
      {
        printf(" %d ",x);
        x++;
      }

    }
    printf ("\n");
  }

getch ();
return 0;

}
