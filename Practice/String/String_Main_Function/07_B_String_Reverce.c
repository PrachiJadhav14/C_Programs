#include<stdio.h>
#include<conio.h>

int StrlenF(char *);
int StrRevF(char *);

int main()
{
    char cSrc[20] = {'\0'};

    printf("\n Enter A String => ");
    gets(cSrc);

    StrRevF(cSrc);

    printf("\n\n Reversed String is :%s",cSrc);

    getch();
    return 0;

}

int StrlenF(char *Src)
{
    int Cnt = 0;
    while(*Src != '\0')
    {
        Src++;
        Cnt++;
    }
    return Cnt;
}

int StrRevF(char *Str)
{
    char ch = '\0';
    char *Temp = Str + StrlenF(Str)-1;

    while(Str < Temp)
    {
        ch = *Str;
        *Str = *Temp;
        *Temp = ch;

        Str++;
        Temp--;
    }
    return ;
}
