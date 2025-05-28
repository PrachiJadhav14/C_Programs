#include<stdio.h>
#include<conio.h>

int Strcpy(FName,LName);
int main()
{
    char FName[20] = {'\0'};
    char cSrc= {'\0'};

    char LName[20] ={'\0'};
    char cDest = {'\0'};
    int Cnt = 0;

    printf("\n First Name is => ");
    gets(FName);

    printf("\n Second Name is => ");
    gets(LName);

    Cnt = Strcpy(FName,LName,cSrc,cDest);

    printf("\n Youre First Name is => %s",FName);
    printf("\n Youre Last Name is => %s",LName);

    printf("\n Copied First Name is =>%s",cSrc);
    printf("\n Copied Last Name is =>%s",cDest);


    getch();
    return 0;
}
int Strcpy(char* FName,char* LName,char* cSrc,char* cDest)
{
    int i = 0;

}

