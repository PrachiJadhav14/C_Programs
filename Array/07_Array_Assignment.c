
///Creat Array, Accept & Display Element Using Loop-With  Macro.
///Find Count Given Element In That Array.

#include <stdio.h>
#include<conio.h>
#define size 5
int main()
{
    int  i=0,srh =0,Arr[size],cnt=0;

        for(i=0 ; i<size; i++)
        {
          printf("\n Enter Element %d =>",i+1);
          scanf("%d",&Arr[i]);
        }
  getch();

        printf("\n Enter To Be Searched : ");
        scanf("%d",&srh);

        for(i=0 ; i<size; i++)
        {
           if(srh==Arr[i])
            {
              cnt++;
            }
        }

        if (cnt==0)
        {
          printf("Entered Element Not Found in Given Array.");
        }
        else
        {
          printf("\n Count Of Enterd Element %d is %d Times.",srh,cnt);
        }

 getch();
 return 0;

}



