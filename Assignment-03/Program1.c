///////////////////////////////////////////////////////////////
// Write  a Program which accept one number from user and
// print that number of even number on screen.
///////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0) 
    {
        iNo = -iNo;
    }

    printf("First %d even numbers are:\n", iNo);
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", 2 * iCnt);
    }
    printf("\n");

}

  int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0; 
}