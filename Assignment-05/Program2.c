//////////////////////////////////////////////////////////////////////
// Write a Program which accept number for user and print the
// numbers still that number.
//
// input : 5                      
// Output : 1 2 3 4 5     
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display( int iNo) 
{
    int iCnt = 0;
    iCnt = 1;
    
    while( iCnt <= iNo)
    {
        printf("%d ", iCnt);
        iCnt++;
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