////////////////////////////////////////////////////////////////
// Write a program which accept number from user and display 
// its Multiplication of factors.
//
// Input : 12            Input : 13            Input : 10
// Output : 144          Output : 1            Output : 10
// (1*2*3*4*6)              (1)                 (1*2*5)
////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = MultiFact(iValue);

    printf("%d\n", iRet);
  
    return 0;
}