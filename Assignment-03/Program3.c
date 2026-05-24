///////////////////////////////////////////////////////////////
// Write  a Program which accept one number from user and
// print even factor of that number on screen.
// Input : 36
// Output : 2 4 6 12 18
///////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFacter(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0) 
    {
        iNo = -iNo;
        return;
    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
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

    DisplayFacter(iValue);

    return 0;
  
}