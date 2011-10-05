#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void Input(int a[], int &n);
bool CheckDuplicate(int a[], int n, int i);
void TotalNotDuplicate(int a[], int n);

void main()
{
	int a[100];
	int n;
	//RandomArray(a,n);
	Input(a,n);
	PrintArray(a,n);
	TotalNotDuplicate(a,n);
	getch();
}

void Input(int a[], int &n)
{
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = 0;i<n;i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d", &a[i]);
	}
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

bool CheckDuplicate(int a[], int n, int i)
{
	for(int j = i-1;j>=0;j--)
	{
		if(a[i] == a[j])
			return false;
	}
	return true;
}


void TotalNotDuplicate(int a[], int n)
{
	int Sum = 0;
	for(int i=0;i<n;i++)
	{
		if(CheckDuplicate(a,n,i))
			Sum += a[i];
	}
	printf("\nTong khong trung: %d",Sum);
}