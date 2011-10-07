#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>


void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void SapXep(int a[], int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	SapXep(a,n);
	PrintArray(a,n);
	getch();
}

void RandomArray(int a[], int &n)
{
	printf("Nhap n: ");
	scanf("%d", &n);
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		int j = rand() % 100;
		int k = rand() % 2;
		if(k == 0)
			a[i] = j;
		else
			a[i] = j*-1;

	}
}

void PrintArray(int a[], int n)
{
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%3d ",a[i]);
	}
}

void SapXep(int a[], int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i;j<n;j++)
			if(abs(a[i]) > abs(a[j]))
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}