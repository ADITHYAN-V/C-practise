//To print the nth Fibonacci number recursivly//
#include <stdio.h>
int fib(int n);
int fib(int n)
{
	int fibo;
	if (n <= 1)
	{
		return n;
	}
	fibo = fib(n - 1) + fib(n - 2);
	return fibo;
}
int main()
{
	int n;
	printf("Enter required number: ");
	scanf("%d",&n);
	printf("%d\n", fib(n));
}
