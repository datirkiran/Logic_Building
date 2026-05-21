////////////////////////////////////////////////////////////////////////
// Accept one character from user and convert case of that character. 
// Input : a           Output : A
// Input : D           Output : d
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char Cvalue)
{
    if((Cvalue >= 'A') && (Cvalue <= 'Z'))
    {
        Cvalue = Cvalue + 32;
        printf("Converted character is : %c\n", Cvalue);
    }
    else if((Cvalue >= 'a') && (Cvalue <= 'z'))
    {
        Cvalue = Cvalue - 32;
        printf("Converted character is : %c\n", Cvalue);
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