#include <stdio.h>
#include <conio.h>

void InitFibonacci(int a[],int &n);

void main()
{
	int a[100];
	int n;
	InitFibonacci(a,n);
	getch();
}

void InitFibonacci(int a[],int &n)
{
	printf("Nhap n: ");
	scanf("%d", &n);
	a[0] = 0;
	a[1] = 1;
	for(int i=2;i<n;i++)
	{
		a[i] = a[i-1]+a[i-2];
	}
}