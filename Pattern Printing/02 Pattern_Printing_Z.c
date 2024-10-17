
///Program To Display Z charecter
#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, x = 0;
  printf("\n Enter A Pattern No = ");
  scanf ("%d",&x);

  printf("\n====================Pattern====================\n\n");

   for(i=1; i<=x; i++)
      {
         for(j=1; j<=x; j++)
         {
           if(i==1 || i==x || i+j==x+1)
              {
                 printf(" * ");
              }
              else
                {
                  printf("   ");
                }
          }
             printf ("\n");
      }

      printf("\n==================Pattern==================\n\n");

 getch();
 return 0;
}
