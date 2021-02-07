#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers: \n");
    scanf("%d %d",&a,&b);
    int p,q,r,s;
    printf("all the four operations are \n");
    p=a+b;
    q=a-b;
    r=a*b;
    s=a/b;
    printf("%d + %d = %d \n",a,b,p);
    printf("%d - %d = %d \n",a,b,q);
    printf("%d * %d = %d \n",a,b,r);
    printf("%d / %d = %d \n",a,b,s);

    return 0;

}
