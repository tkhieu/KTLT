#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void Input(int a[], int &n);
int FindMostRepeat(int a[], int n);
void PrintMostRepeat(int a[],int n);

void main()
{
	int a[100];
	int n;
	Input(a,n);
	PrintArray(a,n);
	PrintMostRepeat(a,n);
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

int FindMostRepeat(int a[], int n)
{
	int count = 0;
	int currentmostrepeat = 0;
	int currentmostposition = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j] == a[i] && i != j)
			{
				count++;
			}
			if(count > currentmostrepeat)
			{
				currentmostposition = i;
				currentmostrepeat = count;
			}
		}
	}
	return currentmostposition;
}

void PrintMostRepeat(int a[],int n)
{
	int p = FindMostRepeat(a,n);
	printf("\nVi tri: %d",p);
	printf("\nGia tri: %d",a[p]);
}