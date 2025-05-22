#include<stdio.h>
#include<conio.h>

int String_Length(char[]);

int main()
{
    char cSrc[20] = "";
    int i = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    i = String_Length(cSrc);
    printf("\n StringLength of  String is = %d",i);

    getch();
    return 0;
}

int String_Length(char cSrc[])
{
    int i = 0;

    while(cSrc[i] != '\0')
    {
        i++;
    }
    return i;
}
