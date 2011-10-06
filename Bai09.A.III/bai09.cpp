#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <cmath>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
int FindMaxDimension(int a[], int n);
void DisplayResult(int a[], int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	DisplayResult(a,n);
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

int FindMaxDimension(int a[], int n)
{
	int current = -1;
	int dimension = 0;
	for(int i=0;i<n-1;i++){
		if(abs(a[i] - a[i+1]) > dimension)
		{
			dimension = abs(a[i] - a[i+1]);
			current = i;
		}
	}
	return current;
}

void DisplayResult(int a[], int n)
{
	int r = FindMaxDimension(a,n);
	printf("\nGia tri a: %d",a[r]);
	printf("\nGia tri b: %d",a[r+1]);
	printf("\nVi tri: %d",r);
	
}