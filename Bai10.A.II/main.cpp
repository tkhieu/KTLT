#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
bool CheckChanKe(int a[], int n, int i);
void TotalEven(int a[], int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	TotalEven(a,n);
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

bool CheckChanKe(int a[], int n, int i)
{
	if(a[i] % 2 == 0
		&& (a[i+1] % 2 == 0
		|| a[i-1] % 2 == 0))
		return true;
	else
		return false;

}

void TotalEven(int a[], int n)
{
	printf("\n");
	int Sum = 0;
	for(int i=1;i<n-1;i++)
	{
		if(CheckChanKe(a,n,i))
		{
			Sum += a[i];
			printf("%3d ",a[i]);
		}
	}
	if(a[0] % 2 == 0)
	{
		Sum += a[0];
		printf("%3d ",a[0]); 
	}
	if(a[n-1] % 2 == 0)
	{
		Sum += a[n-1];
		printf("%3d ",a[n-1]);
	}
	printf("\nTong chan ke: %d",Sum);
}