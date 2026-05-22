//////////////////////////////////////////////////////////////////////
// Write a Program which accept N number for user and print all odd
// numbers uo to N.
//
// input : 15                      
// Output : 1 3 5 7 9 11 13 15     
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay( int iNo) 
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);
    printf("\n");

    return 0;
}