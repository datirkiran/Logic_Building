/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a Program which accept number from user and display below pattern.
//
// Input: 2         Output: * * # #
// Input: 6         Output: * * * * * * # # # # # #
// Input: -5        Output: * * * * * # # # # #
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}