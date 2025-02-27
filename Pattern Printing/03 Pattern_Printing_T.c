///Program To Disply T

#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0 , x = 0;
  printf("\n Enter Pattern Number = ");
  scanf("%d",&x);

  printf("\n=================Pattern=============\n");

  for (i = 1; i<=x; i++)
  {
    for(j= 1; j<=x; j++)
    {
      if
       (i==1|| j==0 || j==(x/2))
      {
        printf(" * ");
      }

        else
        {

        printf("    ");
         }
      }
        printf("\n");

   }
 printf("=====================Thanks=================");

    getch ();
    return 0;
}
