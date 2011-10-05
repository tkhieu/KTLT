#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void TrungBinhNhanDuong(int a[], int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	TrungBinhNhanDuong(a,n);
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

void TrungBinhNhanDuong(int a[], int n)
{
	printf("\n");
	int count = 0;
	double Product = 1;
	for(int i=0;i<n;i++)
	{
		if(a[i] > 0)
		{
			Product *= a[i];
			count++;
			printf("%5d",a[i]);
		}
	}
	float Avg = pow((float)Product,(float)1/count);
	printf("\nTrung binh nhan: %f",Avg);
}