////////////////////////////////////////////////////////////////////////
// Accept one character from user and convert case of that character. 
//
// Input : a           Output : A
// Input : D           Output : d
//
// A = 65   B = 66   C = 67    //  Ascii values of Alphabets
// a = 97   b = 98   c = 99    //  Difference is 32 between A to a .
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue = cValue + 32;
        printf("Converted character is : %c\n", cValue);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        cValue = cValue - 32;
        printf("Converted character is : %c\n", cValue);
    }
    else
    {
        printf("Please enter a valid character.\n");
    }
}

  int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
  
}