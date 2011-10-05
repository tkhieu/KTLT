#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
int FindMin(int a[], int n);
int FindMax(int a[], int n);
void PrintMinMax(int a[], int n);

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
		a[i] = rand() % 99;
	}
}

void PrintArray(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%3d ",a[i]);
	}
}

int FindMin(int a[], int n)
{
	int k = 0;
	for(int i=1;i<n;i++)
	{
		if(a[i] < a[k])
			k = i;
	}
	return k;
}

int FindMax(int a[], int n)
{
	int k = 0;
	for(int i=1;i<n;i++)
	{
		if(a[i] > a[k])
			k = i;
	}
	return k;
}

void PrintMinMax(int a[], int n)
{
	int min = FindMin(a,n);
	int max = FindMax(a,n);
	printf("\nMin: %d",a[min]);
	printf("\nMax: %d",a[max]);
}