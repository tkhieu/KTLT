#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int a[], int &n);
void PrintArray(int a[], int n);
bool CheckPrime(int k);
int TongCacChuSo(int k);
void TongCacSo_NguyenTo(int a[], int n);

void main()
{
	int a[100];
	int n;
	RandomArray(a,n);
	PrintArray(a,n);
	TongCacSo_NguyenTo(a,n);
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

bool CheckPrime(int k)
{
	for(int i=2;i<k;i++)
	{
		if(k%i ==0)
			return false;
	}
	return true;
}

int TongCacChuSo(int k)
{
	int s = 0;
	int j = k;
	while (j > 0)
	{
		s += j % 10;
		j = j / 10;
	}
	return s;
}

void TongCacSo_NguyenTo(int a[], int n)
{
	int Sum = 0;
	printf("\n");
	for(int i = 0; i< n;i++)
	{
		if(CheckPrime(TongCacChuSo(a[i])))
		{
			printf("%3d ",a[i]);
			Sum += a[i];
		}
	}
	printf("\nTong cac phan tu co tong cac chu so la so nguyen to: %d",Sum);
}