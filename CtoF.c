#include <stdio.h>
int main()
{
    float c,f;
    printf("enter the temp in celsius: \n");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("the temp in fahrenheit is: %f\n",f);
    return 0;
}