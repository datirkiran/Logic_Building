//////////////////////////////////////////////////////////////////////
// Write a Program which accept number for user and print its
// numbers line.
//
// input : 5                      
// Output : -5 -4 -3 -2 -1 0 1 2 3 4 5     
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display( int iNo) 
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Display(iValue);
    printf("\n");

    return 0;
}