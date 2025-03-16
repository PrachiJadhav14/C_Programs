#include<stdio.h>
#include<conio.h>
void Girl();   //function Defination
void Boy();     //function Defination

int main(){                //function Call

        printf("\n Enter You Are  Girl Or  Boy => ");
        char ch;
        scanf("%c",&ch);

        Boy();
}

void Girl(){    //Function Defination
    printf("Hiii Same Here , I Am Girl \n");
       Boy();
}
 void Boy(){     //Function Defination
     printf("\n Hiiii Same Here  , I Am Boy");
 }
