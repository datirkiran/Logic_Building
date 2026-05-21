///////////////////////////////////////////////////////////////
// Write  a Program which accept one number from user and
// print even factor of that number on screen.
// Input : 36
// Output : 2 4 6 12 18
///////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFacter(int iNo)
{
    int i = 0;

    if(iNo <= 0) 
    {
        iNo = -iNo;
        return;
    }
    for(i = 1; i <= iNo/2; i++)
    {
        if((iNo % i) == 0 && (i % 2) == 0)
        {
            printf("%d \n", i);
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