
///Create Array, Accepting & display element using loop-with macro.
/// Find count of even odd & zero elements in that array.

#include <stdio.h>
#include<conio.h>
#define size 5
int main()
{
     int i =0, E_cnt=0,o_cnt =0, z_cnt=0, Arr[size];

     for(i=0 ; i<size ; i++)
          {
           printf("\n Enter Element %d =>",i+1);
           scanf("%d",&Arr[i]);
          }

  getch ();

       for(i=0 ; i<size;i++)
     {
         if(Arr[i]==0)
         {
           z_cnt++;
         }
         else if(Arr[i]%2==0)
         {
           E_cnt++;
         }
         else
         {
           o_cnt++;
         }
     }

    printf("\n Count of zero in given  array is : %d.",z_cnt);
    printf("\n Count of zero in given  array is : %d.",E_cnt);
    printf("\n Count of zero in given  array is : %d.",o_cnt);

    getch ();
    return 0;
 }
