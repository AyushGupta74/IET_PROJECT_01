#include<stdio.h>
#include<math.h>

int main()
{
    double base,exponent,result;
    printf("Enter the value of base ");
    scanf("%lf",&base);

    printf("Enter the value of exponent");
    scanf("%lf",&exponent);

    result=pow(base,exponent);
    printf("%.2lf raised to the pow pf %.2lf is equals to %.2lf",base,exponent,result);
    return 0;

}
