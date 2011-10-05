#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void PrintResult(int a[], int n);

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

void TimMangConDuongDai(int a[], int n, int &begin, int &end)
{
	
	int currentbegin = 0;
	int currentend = 0;
	for(int i=0;i<n-1;i++){		
		if(a[i]>=0)
		{
			begin = i;
			end = begin;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>=0)
				{
					end = j;
				}
				else
				{
					j=n;
				}
			}
		}
		if(end-begin > currentend - currentbegin)
		{
			currentend = end;
			currentbegin = begin;
		}
	}
	begin = currentbegin;
	end = currentend;
}

void PrintResult(int a[], int n)
{
	printf("\n");
	int begin,end;
	TimMangConDuongDai(a,n,begin,end);
	for(int i = begin;i<=end;i++)
	{
		printf("%5d",i);
		printf("%5d\n",a[i]);
	}
}