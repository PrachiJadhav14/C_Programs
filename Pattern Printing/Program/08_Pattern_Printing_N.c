///Program To Disply Reverse N
#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0 , x = 0;
  printf("\n Enter Pattern Number = ");
  scanf("%d",&x);

  printf("\n\n=================Pattern=============\n\n");
  for (i = 1; i<=x; i++)
  {
    for(j= 0; j<=x; j++)
    {
      if(j==1|| j==x || i==j)
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

 printf("\n=====================Thanks=================\n");

getch ();
return 0;


}
