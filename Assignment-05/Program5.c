//////////////////////////////////////////////////////////////////////
// Write a Program which accept N number for user and print first 5 
// multiples of N.
//
// input : 5                      
// Output : 5 10 15 20 25     
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay( int iNo) 
{
    int iCnt = 0;
    iCnt = 1;

    while(iCnt <= 5)
    {
        iNo = iNo * iCnt;
        printf("%d ", iNo);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);
    printf("\n");

    return 0;
}