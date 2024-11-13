
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FirstName[20] ="";
    char LastName[20]  ="";


    printf("\n Enter First Name =");
    gets(FirstName);
    printf("\n Enter Last Name =");
    gets(LastName);

    getch();

    printf("\n Enter First Name is =");
    gets("FirstName");
    printf("\n Enter Last Name is=");

    printf("\n First Name Enterd is =%s",FirstName);
    printf("\n Last Name Enterd is =%s", LastName);


    strncat(FirstName,LastName,3);

    getch();
    printf("\n\n =================================\n");

    printf("\n After strncat Call First Name Enterd is = %s.",FirstName);
    printf("\n After strncat Call Lirst Name Enterd is = %s.",LastName);

    printf("\n\n=====================================\n");

    getch();
    return 0;

}
