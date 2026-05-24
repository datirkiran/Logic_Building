///////////////////////////////////////////////////////////////
// Write  a Program which accept one number from user and
// print even factor of that number on screen.
// Input : 36
// Output : 2 4 6 12 18
///////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0) 
    {
        iNo = -iNo;

    }
    for(iCnt = 2; iCnt <= iNo/2; iCnt+=2)
    {
        if((iNo % iCnt) == 0 && (iCnt % 2) == 0)
        {
            printf("%d \n", iCnt);
        }
    }
 
}

  int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
  
}