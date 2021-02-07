#include <stdio.h>
int main()
{
    int r,d;
    float a,p;
    printf("the radius of the circle is: \n");
    scanf("%d",&r);
    d=r*2;
    printf("the diameter is : %d \n",d);
    p=2*(3.14)*r;
    printf("the perimeter is : %f \n",p);
    a=(3.14)*r*r;
    printf("the area is : %f \n",a);
    return 0;
}