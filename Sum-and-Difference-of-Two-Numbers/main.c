#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;
    int sum, diff;
    float sumf, difff;

    scanf("%d %d", &a, &b);
    scanf("\n");
    scanf("%f %f", &c, &d);

    sum = a + b;
    diff = a - b;
    sumf = c + d;
    difff = c - d;

    printf("%d %d\n%.1f %.1f", sum, diff, sumf, difff);

    return 0;
}
