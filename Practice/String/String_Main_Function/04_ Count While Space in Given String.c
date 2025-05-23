#include<stdio.h>
#include<conio.h>

int spaceCnt(char[]);

int main()
{
    char c_Src[20] = {'\0'};
    int space_Cnt = 0,i = 0;


    printf("\n Enter a String => ");
    gets(c_Src);

    i = spaceCnt(c_Src);

    printf("\n Given Space Count is =>  %d",i);

    getch();
    return 0;

}

int spaceCnt(char cSrc[])
{
  int i = 0,spaceCnt = 0;

   while(cSrc[i] != '\0')
  {
      if(cSrc[i] ==' ')
      {
         spaceCnt++;
      }

      i++;
  }

  return i;
}
