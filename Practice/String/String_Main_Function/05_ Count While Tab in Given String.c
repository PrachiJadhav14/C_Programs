#include<stdio.h>
#include<conio.h>
int tabCnt(char cSrc[]);

  int main()
  {
     char cSrc[40] = {'\0'};
      int T_Cnt = 0,i = 0;

     printf("\n Enter A String => ");
     gets(cSrc);

     i  = tabCnt(cSrc);

     printf("\n Given Tab is String => %d",i);

     getch();
     return 0;
  }

 int tabCnt(char cSrc[])
 {
     int i = 0, T_Cnt =0;

     while(cSrc[i] != '\0')
     {
         if(cSrc[i] == '\t')
         {
            T_Cnt++;
         }
         i++;
     }
     return i;
 }
