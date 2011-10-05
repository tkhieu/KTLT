#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
int FindDuongMin(int a[], int n);
int FindAmMax(int a[], int n);
void PrintMinMax(int a[], int n);
int FirstAm(int a[], int n);
int FirstDuong(int a[], int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	PrintMinMax(a,n);
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

int FindDuongMin(int a[], int n)
{
	int k = FirstDuong(a,n);
	for(int i=1;i<n;i++)
	{
		if(a[i] < a[k] && a[i] > 0)
			k = i;
	}
	return k;
}

int FindAmMax(int a[], int n)
{
	int k = FirstAm(a,n);
	for(int i=1;i<n;i++)
	{
		if(a[i] > a[k] && a[i] < 0)
			k = i;
	}
	return k;
}

int FirstAm(int a[], int n)
{
	for(int i=0;i<n;i++)
		if(a[i] < 0)
			return i;
}

int FirstDuong(int a[], int n)
{
	for(int i=0;i<n;i++)
		if(a[i] > 0)
			return i;
}

void PrintMinMax(int a[], int n)
{
	int min = FindDuongMin(a,n);
	int max = FindAmMax(a,n);
	printf("\nMin: %5d %5d",a[min],min);
	printf("\nMax: %5d %5d",a[max],max);
}