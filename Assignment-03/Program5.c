////////////////////////////////////////////////////////////////////////
// Accept one character from user and check whether that 
// character is vowel (a, e, i, o, u) or Not. 
//
// Input : E           Output : True
// Input : D           Output : False
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char Cvalue)
{
    if((Cvalue == 'A') || (Cvalue == 'E') || (Cvalue == 'I') || (Cvalue == 'O') || (Cvalue == 'U') ||
       (Cvalue == 'a') || (Cvalue == 'e') || (Cvalue == 'i') || (Cvalue == 'o') || (Cvalue == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

  int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character: ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a vowel.\n");
    }
    else
    {
        printf("It is not a vowel.\n");
    }

    return 0;
  
}