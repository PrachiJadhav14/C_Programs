#include<stdio.h>
#include<conio.h>

int main()
{


    char c_Src[50] = {'\0'};
    char Sm_Cnt = 0;
    int i =0;

    printf("\n Enter a String => ");
    gets(c_Src);

      while(c_Src[i] != '\0')
      {
          if(c_Src[i] >= 'a' && c_Src[i] <= 'z')
          {
             Sm_Cnt++;
          }
          i++;
      }

   printf("\n Count Small Letters Given String is = %d.",Sm_Cnt);

   getch();
   return 0;

}



