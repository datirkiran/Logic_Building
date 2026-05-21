////////////////////////////////////////////////////////////////
// Write a program which accept number from user and display 
// its factors in decreasing order.
//
// Input : 12            Input : 13    Input : 10
// Output : 6 4 3 2 1    Output : 1    Output : 5 2 1
////////////////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    for (iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}