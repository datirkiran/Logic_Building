//////////////////////////////////////////////////////////////////////////////////////////////
// Write a Program which accept temperature in Fahrenheit from user and convert 
// into Celsius. (Celsius = (Fahrenheit - 32) * (5 / 9))
//
// Input: 10     Output: -12.2222  (10 - 32) * (5 / 9) = -12.2222
// Input: 34     Output: 1.11111   (34 - 32) * (5 / 9) = 1.11111
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtCs(float fTemp)
{
    double dCelsius = 0.0;

    if(fTemp < 0)
    {
        fTemp = -fTemp;
    }

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtCs(fValue);

    printf("Temperature in Celsius is : %lf\n", dRet);

    return 0;
}