#include<conio.h>
#include<stdio.h>

int main()
{

    printf("\n Let's Learn About Pointers => ");
    int a = 14;
    int *ptra = &a;

    printf("\n\n The Address Of Pointer To a is %p",&ptra);
    printf("\n The Address Of a is %p",&a);

    printf("\n The Address Of a is %p ",ptra);
    printf("\nThe Value Of a is %d",*ptra);
    printf("\n The Value Of a is %d\n",a);

}
