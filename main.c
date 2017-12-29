#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double e, e1;

    scanf("%lf", &x);
    e = exp(x);
    e1 = 1 + (x / (1 * 1) + (pow(x, 2) / (1 * 2)) + (pow(x, 3) / (1 * 2 * 3)) + (pow(x, 4) / (1 * 2 * 3 * 4))
    + (pow(x, 5) / (1 * 2 * 3 * 4 * 5)));
    printf("%.6lf\n%.6lf\n", e, e1);
    return 0;
}