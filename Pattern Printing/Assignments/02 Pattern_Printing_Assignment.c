/// Program to print left lower pattern using albhabets .

#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j =0;
  char ch = '\0';

  for(i =1,ch='A'; i<= 5; i++)
  {
     for(j=1;j<=5;j++,ch++)
   {
     if(i>=j)
     {
         printf(" %c ",ch);
     }
   }
    printf("\n");
 }
   printf("\n Thanks!!!");
  getch ();
  return 0 ;
}
