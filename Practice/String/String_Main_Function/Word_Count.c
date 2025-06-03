#include<stdio.h>
#include<conio.h>

int CalculateEvenOddDiff(int Num);

int main()
{
    int Num,Diff;

    printf("\n Enter A Number :");
    scanf("%d",&Num);

    Diff = CalculateEvenOddDiff(Num);

    printf("\n Difference (Even - Odd) = %d",Diff);

    getch();
    return 0;
}

int CalculateEvenOddDiff(int Num)
{
    int rem, EvenSum = 0,OddSum = 0;

    while(Num != 0)
    {
        rem = Num % 10;

        if(rem % 2 == 0)
            EvenSum += rem;
        else
            OddSum += rem;

        Num /=10;
    }

    return EvenSum - OddSum;
}
