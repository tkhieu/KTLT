#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
int CountInArray(int a[], int n);
void PrintResult(int a[],int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	PrintResult(a,n);
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

int CountInArray(int a[], int n)
{
	int m;
	printf("\nNhap gia tri m: ");
	scanf("%d",&m);
	int count = 0;
	for(int i=0; i<n;i++)
	{
		if(a[i] == m)
			count++;
	}
	return count;
}

void PrintResult(int a[],int n)
{
	int c = CountInArray(a,n);
	printf("\nXuat hien %d lan.",c);
}