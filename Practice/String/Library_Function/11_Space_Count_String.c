#include<stdio.h>
#include<conio.h>
int main()
{
  int sCnt = 0, i = 0;
  char cSrc[60] = {'\0'};

  printf("\n Enter A String => ");
  gets(cSrc);

  while(cSrc[i] != '\0')
  {
      if(cSrc[i] == ' ')
      {
         sCnt++;
      }
      i++;
  }
   printf("Count Of Space in Given String is =%d",sCnt);

   getch ();
   return 0;
}
