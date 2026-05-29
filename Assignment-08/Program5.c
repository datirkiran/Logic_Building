////////////////////////////////////////////////////////////////////////////////////////////////
// Write a Program which accept squer feet from user and convert it into square meter.
// (1 squer feet = 0.09290304 Square Meter)
//
// Input: 5      Output: 0.4645152
// Input: 7      Output: 0.65032128
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(float iValue)
{
    double dSqMeter = 0.0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    dSqMeter = iValue * 0.09290304;

    return dSqMeter;
}

int main()
{
    int iValue = 0.0; 
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);
    
    printf("Area in square meter is : %lf\n", dRet);

    return 0;
}