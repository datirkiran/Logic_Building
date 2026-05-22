//////////////////////////////////////////////////////////////////////
// Write a Program which accept number for user and print the
// number of $ and * on screen.
//
// input : 5                        Input : 3
// Output : $ * $ * $ * $ * $ *     Output : $ * $ * $ *
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern( int iNo) 
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ *");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Pattern(iValue);
    printf("\n");

    return 0;
}