#include<stdio.h>
#include<conio.h>

VowelCnt(cSrc[]);

int main()
{
     char cSrc[40] = {'\0'};
     eint v_Cnt = 0, i = 0;

     printf("\n Enter A String => ");
     gets(cSrc);

     VowelCnt(cSrc[]);

     printf("\n Count Of Vowel is Given String is = %d",v_Cnt);


     getch();
     return 0;


}

 VowelCnt(char cSrc[])
 {
     while(cSrc[i] != '\0')
     {
        if(CSrc[i] == 'a' || cSrc[i] == 'e' || cSrc[i] ='i'|| cSrc[i] = 'o')
     }
 }
