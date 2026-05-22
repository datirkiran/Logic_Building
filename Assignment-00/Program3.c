//////////////////////////////////////////////////////
// Program to Print 5 to 1 Numbers on the Screen
/////////////////////////////////////////////////////

#include <stdio.h>

int Display()
{
    int i = 0;
  i = 5;
    while(i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}
int main()
{
    Display(); 

    return 0;
}