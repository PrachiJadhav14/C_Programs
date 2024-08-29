///Create Array Or Element Accept And Disply All Element With Loop

#include <stdio.h>
#include<stdio.h>
int main()
{
  int i=0 ,Arr[7];

   for (i=0 ; i<7 ; i++)
   {
     printf("\n Enter a Element %d=>",i+1);
     scanf("%d",&Arr[i]);
   }
   getch();

    for (i=0;i<7;i++)
    {
     printf("\n Value Of Element %d is = %d.",i+1,Arr[i]);
    }

 getch();
 return 0;
 }
