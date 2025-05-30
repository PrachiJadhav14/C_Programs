#include<stdio.h>
#include<conio.h>

 int strrev(Src);

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0;

    printf("\n Enter A String => ");
    gets(cSrc);

    printf("\n Given String Before is =%s",cSrc);

    i= strrev(cSrc);

    printf("\n Given String After is = %s",cSrc);

    getch();
    return 0;
}

int strrev(char Src[])
{
    int i = 0;

    while(Src[i] != '\0')
    {
               i++;
    }

    return i;
}
