#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int vCnt = 0,i = 0;

    printf("\n enter A String => ");
    gets(cSrc);


   while(cSrc[i] != '\0')
   {
       if(cSrc[i] == 'a' ||cSrc [i]=='e'|| cSrc[i] =='i' ||cSrc[i] == 'o' || cSrc[i] == 'u'|| cSrc[i] == 'A'|| cSrc[i] =='E' || cSrc[i] == 'I' || cSrc[i] == 'O' || cSrc[i] =='U')
       {
           vCnt++;
       }
       i++;
   }
   printf("\n Count Of Vowel is Given String is =%d",vCnt);

   getch();
   return 0;
}
