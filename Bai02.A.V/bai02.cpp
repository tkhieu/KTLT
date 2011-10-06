#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void FindDuongLienKe(int a[],int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	FindDuongLienKe(a,n);
	getch();
}

void RandomArray(int a[], int &n)
{
	printf("Nhap n: ");
	scanf("%d", &n);
	srand(time(NULL));
	int k,m;
	for(int i=0;i<n;i++)
	{
		m = rand() % 99;
		k = rand()%2;
		if(k == 0)
			a[i] = m;
		else
			a[i] = m * -1;
	}
}

void PrintArray(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%3d ",a[i]);
	}
}

void FindDuongLienKe(int a[],int n)
{
	printf("\n");
	for(int i=0;i<n-1;i++)
	{
		if(a[i] > 0 && a[i+1] > 0) 
		{
			printf("%3d",i);
		}
			
	}
}