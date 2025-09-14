#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int bigg1, bigg2;
    if (a > b)
      bigg1 = a;
    else
      bigg1 = b;
    if (c > d)
    {
      if (c > bigg1)
        return c;
      else
        return bigg1;
    }
    else
    {
      if (d > bigg1)
        return d;
      else
        return bigg1;
    }
    return 0;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
