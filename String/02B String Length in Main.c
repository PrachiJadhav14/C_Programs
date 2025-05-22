
#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] ={'\0'};
    int i = 0;

    printf("\n Enter a string:");
    gets(cSrc);

    while (cSrc[i] !='\0')
    {
        i++;
    }
    printf("\n Length Of Given String is =%d",c_src);

    getch();
    return 0;
}
