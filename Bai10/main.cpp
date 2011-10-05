#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);
bool CheckPrimeNumber(int k);

void main(){
	// Khai báo
	int n;
	int a[100];
	Input(a,n);
	getch();
}

void Input(int a[], int &n)
{
	int k;
	int temp;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap gioi han k: ");
	scanf("%d", &k);
	
	for(int i = 0;i<n;i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d", &temp);

		if(0 <= temp && temp <= k)
			if(CheckPrimeNumber(temp))
			{
				a[i] = temp;
			} else
			{
				printf("So ban vua nhap khong phai la so nguyen to\n",k);
				i--;
			}
		else 
		{
			printf("So ban vua nhap > %d\n",k);
			i--;
		}
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