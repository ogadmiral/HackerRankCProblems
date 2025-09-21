#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
int main() 
{

    int n,size;
    scanf("%d", &n);
  	size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int min_dist = min(min(i, j), min((size - 1 - i), (size - 1 -j)));
            printf("%d", n - min_dist);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}