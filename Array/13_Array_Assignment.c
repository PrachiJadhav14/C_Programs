
///Create Array, Accepting & Display Element Using Loop-With Macro
///Find Count Of Odd Element in That Array

#include<stdio.h>
#include<conio.h>
#define size 5
int main()
{
    int i=0, cnt=0, Arr[size];
       for (i=0; i<size; i++)
      {
         printf("\n Enter element %d =>",i+1);
         scanf("%d",&Arr[i]);
      }
  getch ();

     for(i=0; i<size;i++)
     {
          if (Arr[i]%2==1)
          {
              cnt++;
          }
    }

    printf("\nCount Of Odd Number in give arr is : %d.",cnt);

  getch();
  return 0;
}
