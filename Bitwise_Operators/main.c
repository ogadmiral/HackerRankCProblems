#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
//Biggest function
int biggest(int a, int b)
{
    if (a > b)
      return a;
    else
      return b;
}
// Power function
int ft_power(int nb, int n)
{
    int res = 1;
    while (n > 0)
    {
        res *= nb;
        n--;
    }
    return (res);
}
// Decimal to binary function
int decimal_to_binary(int nb)
{
	if (nb == 0)
        return 0; 
    return (nb % 2) + 10 * decimal_to_binary(nb/2);
}
// Binary to decimal function
int binary_to_decimal(int binary)
{
    int n = 0;
    int nb = 0;
    int digit;
    while (binary != 0)
    {
        digit = binary % 10;
        binary /= 10;
        nb += digit * ft_power(2, n++);
    }
    return nb;
}
// Bitwsie OR (Binary)
int bitwise_or(int a, int b)
{
	int total = 0;
    int big, multiplier;

    multiplier = 1;
    big = biggest(a, b);
    while (big != 0)
    {
		if ((a%10 == 1) || (b%10 == 1))
        {
			total = total + multiplier * 1;
            multiplier *= 10;
			a = (a-(a%10))/10;
			b = (b-(b%10))/10;
            big /= 10;
        }
		else
        {
            multiplier *= 10;
			a /= 10;
			b /= 10;
            big /= 10;
        }
    }
	return (total);
}
// Bitwise AND
int bitwise_and(int a, int b)
{
    
}

void calculate_the_maximum(int n, int k) {
  //Write your code here.

}

int main() {
    int n, k;
    int binaryn, binaryk;

    scanf("%d %d", &n, &k);
    //printf("Result of %d osss %d: %d\n", n, k, ft_power(n, k));
    calculate_the_maximum(n, k);
    binaryn = decimal_to_binary(n);
    binaryk = decimal_to_binary(k);
    printf("binary n: %d\n", binaryn);
    printf("binary k: %d\n", binaryk);
    printf("bitwise OR: %d\n", bitwise_or(binaryn, binaryk));
    printf("bitwise OR decima: %d\n", binary_to_decimal(bitwise_or(binaryn, binaryk)));
    return 0;
}
