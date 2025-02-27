///Program To Display Hallow
#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c = 0, i = 0, j = 0;
  printf("\n Enter a Pattern No Row =");
  scanf("%d",&r);

  printf("\n Enter a Pattern No Column =");
  scanf("%d",&c);

  for (i=1; i<=r; i++)
  {
    for(j=1; j<=c;j++)
  {
     if(i == 1 || j == 1 || i ==r || j == c)
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

  getch();
  return 0;
}







