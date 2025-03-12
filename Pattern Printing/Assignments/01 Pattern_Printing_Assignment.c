///Program to print left lower pattern using alphabets.

#include <stdio.h>
#include<conio.h>
int main ()
{
  int i = 0, j = 0;
  char ch = 'A';

  for (i = 1 ; i <= 5 ;i++)
    {
    for (j = 1; j <= i ;j++)
    {
      printf ("%c",ch);
      ch++;
    }
    printf ("\n");
  }


printf("=========***********=========");

getch ();
return 0;

}
