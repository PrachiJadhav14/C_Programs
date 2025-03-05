///Program To Disply I
#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0 , r = 0 , c = 0;
  printf("\n Enter Pattern Number = ");
  scanf("%d",&r);

  printf("\n Enter Pattern Number = ");
  scanf("%d",&c);


  printf("\n=================Pattern=============\n");
  for (i = 1; i<=r; i++)
  {
    for(j= 1; j<=c; j++)
    {
      if
       (i==1|| i==r || j==(r/2)+1)
      {
        printf(" * ");
      }

        else
        {

        printf("   ");
         }
      }
        printf("\n");

   }
 printf("=====================Thanks=================");
    getch ();
    return 0;
}
