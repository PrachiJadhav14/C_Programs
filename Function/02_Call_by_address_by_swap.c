#include<stdio.h>
#include<conio.h>

void swap(int*,int*);

int main()
{
    int N1 = 0, N2 = 0;

    printf("\n Enter Two No's => ");
    scanf("%d%d",&N1,&N2);

    printf("\n No.s Before Swap => ");
    printf("\n 1st Num = %d, \t 2nd Num = %d",N1,N2);

    swap(N1,N2);

    printf("\n No.s After Swap => ");
    printf("\n 2nd Num = %d, \t 2n Num = %d,N1,N2");

    getch();
    return 0;


}
 void swap(int*p1,int*p2)
{
    int tem = 0 ;
    tem = *p1;
    *p1 = *p2;
   *p2  = tem;


   return ;
}
