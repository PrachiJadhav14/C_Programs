///Program To Display of H for given size.

#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0 , x = 0;
  printf("\n Enter Pattern Number = ");
  scanf("%d",&x);

  printf("\n=================Pattern=============\n");

 for(i =1;i<=x;i++)
  {
    for(j= 1;j<=x; j++)
    {
      if (j==1||j==x||i==(x/2)+1)
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

  printf("=====================Thanks==============");
  getch();
  return 0;
  }
