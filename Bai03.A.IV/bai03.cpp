#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
void PrintResult(int a[], int n);
void TimMangConTangDan(int a[], int n);

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

int CountMangConTangDan(int a[], int n)
{

	int count = 0;
	int begin,end;
	printf("\n");
	for(int i = 0;i<n-1;i++)
	{
		begin = i;
		for(int j=i;j<n-1;j++)
		{
			if(a[j] < a[j+1])
				printf("%3d",1);
			else
			{
				printf("%3d",0);
				i = j;
				if(begin != j)
					count++;
				break;
			} 
				
		}
	}
	return count;
}

void PrintResult(int a[], int n)
{
	printf("\n");
	int count = CountMangConTangDan(a,n);
	printf("\nTong so mang con tang dan: %d",count);
}