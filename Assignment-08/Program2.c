///////////////////////////////////////////////////////////////////////////////////////////////////
// Write a Program which Accept width and height of rectangle from user and calculate its area.
// (Area = Width * Height)
//
// Input: 5.3  9.78                  Output: 51.834
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth < 0)
    {
        fWidth = -fWidth;
    }
    if(fHeight < 0)
    {
        fHeight = -fHeight;
    }
   
    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0; 
    float fValue2 = 0.0; 
    double dRet = 0.0;

    printf("Enter width of rectangle : ");
    scanf("%f", &fValue1);

    printf("Enter height of rectangle : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);
    
    printf("Area of rectangle is : %lf\n",dRet);

    return 0;
}