/////////////////////////////////////////////////////////////////////////////////////////
// Accept Ammount in US Dollars and return its corresponding value in Indian Currency. 
// Consider 1 US Dollar as 70 Indian Rupees.
//
// Input: 10         Output: 700
// Input: 3          Output: 210
// Input: 1200       Output: 84000
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = iNo * 70;

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d\n", iRet);

    return 0;
}