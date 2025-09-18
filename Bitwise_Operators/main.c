#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* this one is a manual solution by me it works but it doesn't pass every test case if you want the correct one go to Correct_Bitwise_Operator */

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
// Bitwsie OR
int bitwise_or(int n, int k)
{
	int total = 0;
    int big, multiplier, a, b;
	a = decimal_to_binary(n);
	b = decimal_to_binary(k);
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
	return (binary_to_decimal(total));
}
// Bitwise AND
int bitwise_and(int n, int k)
{
	int total = 0;
    int big, multiplier, a, b;

	a = decimal_to_binary(n);
	b = decimal_to_binary(k);
    multiplier = 1;
    big = biggest(a, b);
    while (big != 0)
    {
		if ((a%10 == 1) && (b%10 == 1))
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
	return (binary_to_decimal(total));
}
// Bitwise XOR
int bitwise_xor(int n, int k)
{
	int total = 0;
    int big, multiplier, a, b;

	a = decimal_to_binary(n);
	b = decimal_to_binary(k);
    multiplier = 1;
    big = biggest(a, b);
    while (big != 0)
    {
		if ((a%10 == 1) != (b%10 == 1))
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
	return (binary_to_decimal(total));
}
// Max Value in an array of numbers function
int max_value(int *arr, int length)
{
    int max = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
// Main Function
void calculate_the_maximum(int n, int k) {
	int i = 1;
	int j, tmp;
	int bitor[1000], bitand[1000], bitxor[1000], ori = 0, xori = 0, andi = 0, orlength = 0, andlength = 0, xorlength = 0;

	while ( i <= n)
	{
		j = i + 1;
		while (j <= n)
		{
			int bitwiseor = bitwise_or(i, j);
			int bitwisexor = bitwise_xor(i, j);
			int bitwiseand = bitwise_and(i, j); 
			if (bitwiseor < k)
			{
				bitor[ori] = bitwiseor;
				orlength++;
				ori++;
			}
			if (bitwiseand < k)
			{
				bitand[andi] = bitwiseand;
				andlength++;
				andi++;
			}
			if (bitwisexor < k)
			{
				bitxor[xori] = bitwisexor;
				xorlength++;
				xori++;
			}
			j++;
		}
		i++;
	}
	printf("%d\n", max_value(bitand, andlength));
	printf("%d\n", max_value(bitor, orlength));
	printf("%d", max_value(bitxor, xorlength));
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
