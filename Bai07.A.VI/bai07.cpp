#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
int FindMin(int a[], int n);
int FindMax(int a[], int n);
void CreateNewArray(int a[], int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	CreateNewArray(a,n);
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
		a[i] = rand() % 99;
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

int FindMin(int a[], int n)
{
	int j = -1;
	int min = a[0];
	for(int i=1;i<n;i++)
		if(a[i] <min)
		{
			min = a[i];
			j = i;
		}
			
	return j;
}


int FindMax(int a[], int n)
{
	int j = -1;
	int max = a[0];
	for(int i=1;i<n;i++)
		if(a[i] >max)
		{
			max = a[i];
			j = i;
		}
			
	return j;
}

void CreateNewArray(int a[], int n)
{
	int min = FindMin(a,n);
	int max = FindMax(a,n);
	int temp = a[max];
	a[max] = a[min];
	a[min] = temp;
}
