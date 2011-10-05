#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void Total(int a[], int n);
void EvenTotal(int a[], int n);
void OddTotal(int a[], int n);
void AmTotal(int a[], int n);
void DuongTotal(int a[], int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	EvenTotal(a,n);
	OddTotal(a,n);
	AmTotal(a,n);
	DuongTotal(a,n);
	Total(a,n);
	getch();
}

void RandomArray(int a[], int &n)
{
	printf("Nhap n: ");
	scanf("%d", &n);
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		int j;
		if(rand() % 2 == 0)
			j = rand() % 99;
		else 
			j = rand() % 99 * -1;
		a[i] = j;
	}
}

void PrintArray(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%3d ",a[i]);
	}
}

void EvenTotal(int a[], int n)
{
	double Sum = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 == 0)
			Sum += (float)a[i];
	}
	printf("\nTong chan: %f",Sum);
}


void OddTotal(int a[], int n)
{
	double Sum = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 != 0)
			Sum += a[i];
	}
	printf("\nTong le: %f",Sum);
}

void AmTotal(int a[], int n)
{
	double Sum = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] <0)
			Sum += a[i];
	}
	printf("\nTong am: %f",Sum);
}


void DuongTotal(int a[], int n)
{
	double Sum = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] > 0)
			Sum += a[i];
	}
	printf("\nTong duong: %f",Sum);
}

void Total(int a[], int n)
{
	double Sum = 0;
	for(int i=0;i<n;i++)
	{
		Sum += a[i];
	}
	printf("\nTong: %f",Sum);
}