
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

    char cSrc[50]= {'/0'};
    int Len = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    Len = printf("%s",cSrc);

    getch();
    system("cls");

    printf("\n Length Of Given String <%s> is = %d", cSrc , Len);

    getch();
    return  0;

}
