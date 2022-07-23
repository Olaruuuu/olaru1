#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prime(int);
bool is_prime(int i);


int main()
{
	int n;
	scanf("%d", &n);
	prime(n);	
}

void prime(int n)
{
	int contor = 0;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		if (is_prime(i) != false)
		{
			a[contor] = i;
			contor++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("Numerele prime sunt: ");
		printf("%d", a[i]);
		printf("\n");
	}
	
}

bool is_prime(int n)
{
	if (n <= 1)
	{
		printf("%d \n", n);
	}
	else
	{
		for (int j = 2; j < n; j++)
		{
			if ((n % j) == 0)
			{
				return false;
			}
		}
		return true;
	}
}