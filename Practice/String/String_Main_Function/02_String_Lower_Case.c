#include<stdio.h>
#include<conio.h>

StrlwrCase(cSrc);

int main()

{
    char cSrc [20] = {'\0'};

    printf("\n Enter A String => ");
    gets(cSrc);

    StrlwrCase(cSrc);

    printf("\n\n After A  String convert to Lower Case is = %s",cSrc);

    getch ();
    return 0;
}

StrlwrCase(char Src[])
{
    int i = 0;
    while(Src[i] != '\0')
    {
        if(Src[i]>='A' && Src[i]<= 'Z')
        {
            Src[i] = Src [i]+32;
        }
        i++;
    }


    return i;
}
