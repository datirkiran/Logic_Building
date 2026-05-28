//////////////////////////////////////////////////////////////////////////////////////////////////
// Write a Program to find even factorial of given number.
//
// Input: 5         Output: 8 (4 * 2)
// Input: -5        Output: 8 (4 * 2)
// Input: 10        Output: 3840 (10 * 8 * 6 * 4 * 2)
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 2;
    while( iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt = iCnt + 2;
    }

    return iFact;
}

int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is : %d\n", iRet);

    return 0;
}