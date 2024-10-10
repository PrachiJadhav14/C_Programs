#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0 , Dig = 0, Temp = 0 , dcnt =  0;
     printf("\n Enter Any positive Number => ");
     scanf("%d",&No);

     for(Temp=No;Temp>0; Temp/=10)
     {
         dcnt++;
     }
     printf("\n Digit Count is = %d.",No,dcnt);

     getch();
     return 0;
}
