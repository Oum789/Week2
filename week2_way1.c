// //WAY 1
#include <stdio.h>
int main()
{
    double a,b,c ;
    printf("Enter Your First Number : ");
    scanf("%lf",&a);
    printf("Enter Your Second Number : ");
    scanf("%lf",&b);
    printf("Enter Your Third Number : ");
    scanf("%lf",&c);
        if(a>=b&&a>=c)
        {
            printf("%lf is the largest number",a);
            return 0;
        }
        if(b>=a&&b>=c)
        {
            printf("%lf is the largest number",b);
            return 0;
        }
        if(c>=a&&c>=b)
        {
            printf("%lf is the largest number",c);
            return 0;
        }       
}





