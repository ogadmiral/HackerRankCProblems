#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{	
    int n;
    int nb = 0;
    int sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        nb = n % 10;
        sum += nb;
        n = n - nb;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}
