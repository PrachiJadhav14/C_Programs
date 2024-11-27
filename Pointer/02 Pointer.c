#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=21,iNum=55;
    int *iptr1=&iNo;
    int *iptr2=&iNum;

    printf("\n Value of iNo=%d",iNo);
    printf("\n Addres of iNo=%d",&iNo);
    printf("\n Value of iNo Using its Pointer iptr 1%d",iptr1);
    printf("\n Address of iNo Using iptr1=%d",iptr1);
    printf("\n Addres Of iptr1=%d,&iptr1");

    printf("\n\n Value of iNum=%d",iNum);
    printf("\n Addres of iNum=%d",&iNum);
    printf("\n Value of Variable Using its Pointer iptr2%d",iptr1);
    printf("\n Address of Variable Using iptr2=%d");
    printf("\n Address of iptr2=%d",&iptr2);

    printf("\n\n Value=%d",&(* iptr1));
    printf("\n\n Value=%d",&(*iptr2));

    getch();
    return 0;
}
