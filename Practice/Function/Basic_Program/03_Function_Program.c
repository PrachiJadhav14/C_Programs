#include<stdio.h>
#include<conio.h>
void Girl();   //function Defination
void Boy();     //function Defination

int main(){

        printf("\n Enter You Are  Girl Or  Boy => ");//function Call
        char ch;
        scanf("%c",&ch);

        if(ch == 'G')
        {
            Girl();
        }
        else{
             Boy();
        }
}

void Girl(){    //Function Defination
    printf("Hiii Same Here , I Am Girl \n");

}
 void Boy(){     //Function Defination
     printf("\n Hiiii Same Here  , I Am Boy");
 }
