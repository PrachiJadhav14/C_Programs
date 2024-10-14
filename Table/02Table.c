#include<stdio.h>
#include<conio.h>
int main()
{
    int r = 0,c=0,s=0,e=0;

    printf("\n Enter 2 Numbers For Table");

    printf("\n Start's From :");
    scanf("%d",&s);

    printf("\n End From :");
    scanf("%d",&e);

    printf("\n=====================*******************====================");

    for(r=1;r<=10;r++)
    {
        for(c=s;c<=e;c++)
        {
           printf("%2d ",c*r);
        }
        printf("\n");
    }
     printf("\n=====================*******************====================");

    getch();
    return 0;
}
