#include <stdio.h>
int main()
{
    int p,c,b,m,co;
    float per;
    printf("Enter the marks:\n");

    printf("enter chem marks:\n");
    scanf("%d",&c);

    printf("enter phy marks:\n");
    scanf("%d",&p);

    printf("enter bio marks:\n");
    scanf("%d",&b);

    printf("enter maths marks:\n");
    scanf("%d",&m);

    printf("enter comp marks:\n");
    scanf("%d",&co);

    per=((p+c+b+m+co)/5);
    printf("percentage is: %f \n",per);
    
    if(per>=90)
    {
        printf("grade is A");
    }
    else if(90>per && per>=80)
    {
        printf("grade is B");
    }
    else if(80>per && per>=70)
    {
        printf("grade is C");
    }
    else if(per>=60 && per<70)
    {
        printf("grade is D");
    }
    else if(60>per && per>=40)
    {
        printf("grade is E");
    }
    else if(per<40)
    {
        printf("grade is F");
    }
    return 0;
}