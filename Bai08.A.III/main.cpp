#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
bool CheckPrimeNumber(int k);
int CountRepeat(int k, int a[], int n);
int FindMostRepeatPrime(int a[], int n);
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

bool CheckPrimeNumber(int k)
{
	for(int i=2;i<k;i++)
	{
		if((k%i) == 0)
			return false;
	}
	return true;
}

int CountRepeat(int k, int a[], int n)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] == k)
			count++;
	}
	return count;
}

int FindMostRepeatPrime(int a[], int n)
{
	int currentmostprime = -1;
	int countcurrent = 0;
	for(int i=0;i<n;i++)
	{
		if(CheckPrimeNumber(a[i]) && CountRepeat(a[i],a,n) > countcurrent)
		{
			currentmostprime = i;
			countcurrent = CountRepeat(a[i],a,n);
		}
	}
	return currentmostprime;
}

void PrintResult(int a[],int n)
{
	int mostrepeatprimeposition = FindMostRepeatPrime(a,n);
	printf("\nGia tri nguyen to: %d\n",a[mostrepeatprimeposition]);
	for(int i=0;i<n;i++)
	{
		if(a[i] == a[mostrepeatprimeposition])
			printf("%5d",i);
	}
}