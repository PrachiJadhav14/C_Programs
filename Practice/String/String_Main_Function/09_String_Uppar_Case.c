#include<stdio.h>
#include<conio.h>

int struprCase(cSrc);

int main()
{
    char cSrc [20] = {'\0'};

    printf("\n Enter A String => ");
    gets(cSrc);

   struprCase(cSrc);      //Function Call

    printf("\n\n After A string Convert To UpperCase is = %s",cSrc);

   getch();
  return 0;

}

int struprCase(char src[])
{
    int i = 0;

    while(src[i] != '\0')
    {
        if(src[i] >= 'a' && src[i]<= 'z')
        {
            src[i] = src[i]-32;
        }
        i++;
    }
    return 0;
}
