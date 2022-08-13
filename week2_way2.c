// // WAY 2
#include <stdio.h>
int main()
{
    double a,b,c,d ;
    printf("Enter Your First Number : ");
    scanf("%lf",&a);
    printf("Enter Your Second Number : ");
    scanf("%lf",&b);
    printf("Enter Your Third Number : ");
    scanf("%lf",&c);
    switch(a>=b&&a>=c)
    {
        case 1:
            d = a;
            break;
        default:
            break;
    }
    switch(b>=a&&b>=c)
    {
        case 1:
            d = b;
            break;
        default:
            break;
    }
    switch(c>=a&&c>=b)
    {
        case 1:
            d = c;
            break;
        default:
            break;
    }
    printf("The Largest Number is %lf",d);
    return 0;
}