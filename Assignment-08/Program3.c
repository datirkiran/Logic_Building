///////////////////////////////////////////////////////////////////////////////////////////////////
// Write a Program which accept distance in kilometre from user and convert it into meter.
//(1 kilometre = 1000 Meter)
//
// Input: 5      Output: 5000
// Input: 12     Output: 12000
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(float iNo)
{
    int iMeter = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMeter = (int)(iNo * 1000);

    return iMeter;
}

int main()
{
    float fValue = 0.0; 
    int iRet = 0;

    printf("Enter distance in kilometre : ");
    scanf("%f", &fValue);

    iRet = KMtoMeter(fValue);
    
    printf("Distance in meter is : %d\n", iRet);

    return 0;
}