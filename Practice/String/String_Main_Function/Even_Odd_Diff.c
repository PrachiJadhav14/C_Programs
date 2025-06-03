
#include<stdio.h>
#include<conio.h>


int ToggleCase(char[]);


int main()
{
   char cSrc[20] = "\0";

   printf("\n Enter A String : ");
   gets(cSrc);


   ToggleCase(cSrc);
   printf("\n After ToggleCase String is %s",cSrc);

   getch();
   return 0;
}

int ToggleCase(char cSrc[])
{

    int i = 0;

       while(cSrc[i] != '\0')
       {
       if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
       {
           cSrc[i] = cSrc[i]+32;
       }
       else if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
       {
           cSrc[i] = cSrc[i]-32;
       }
       i++;
       }
       return;

}
