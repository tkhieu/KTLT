#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void Total(int a[], int n);
void Product(int a[], int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	Total(a,n);
	Product(a,n);
	getch();
}

void RandomArray(int a[], int &n)
{
	printf("Nhap n: ");
	scanf("%d", &n);
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i] = rand() % 99;
	}
}

void PrintArray(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%3d ",a[i]);
	}
	printf("\n");
}

void Total(int a[], int n)
{
	int Sum = 0;
	for(int i=0;i<n;i++)
	{
		Sum += a[i];
	}
	printf("Tong mang: %d\n",Sum);
}

void Product(int a[], int n)
{
	double Product = 1;
	for(int i=0;i<n;i++)
	{
		Product *= a[i];
	}
	printf("Tich mang: %d\n",Product);
}