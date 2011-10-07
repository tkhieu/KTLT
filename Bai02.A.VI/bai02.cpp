#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void CreateNewArray(int a[],int b[],int n, int &m);
bool CheckInB(int b[],int m, int k);

void main()
{
	int a[100];
	int b[100];
	int n;
	int m = 0;
	RandomArray(a,n);
	CreateNewArray(a,b,n,m);
	PrintArray(a,n);
	PrintArray(b,m);
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

void CreateNewArray(int a[],int b[],int n, int &m)
{
	for(int i=0;i<n;i++)
		if(!CheckInB(b,m,a[i]))
		{
			b[m] = a[i];
			m++;
		}
}

bool CheckInB(int b[],int m, int k)
{

	for(int i=0;i<m;i++)
		if(k == b[i]) return true;
	return false;
}