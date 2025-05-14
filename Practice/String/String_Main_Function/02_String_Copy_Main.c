#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20] = {};
    int i = 0;

   printf("\n Enter You're String => ");
gets(cSrc);

   while(cSrc[i] != '\0')
   {
       cDest[i] = cSrc[i];
       i++;
   }
   cDest[i] = '\0';

   printf("\n Given String is %s!!!!",cSrc);

     printf("\n Copied String is = %s$$$$",cDest);

     getch();
     return 0;
}
