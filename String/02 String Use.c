
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
      char Name[20] ="Unknown";
      char FNM[20] ="Jack Fruit";

      printf("\n Name String Value = %s.",Name);
      printf("\n FNM string Value = %s.",FNM);

      getch();

      strcpy(Name,"Harry");
      printf("\n New Name String Value =%s.",Name);

      getch();

      strcpy(Name, FNM);
      printf("\n Update Name stringb value = %s.", Name);

      getch();
      return 0;
}

