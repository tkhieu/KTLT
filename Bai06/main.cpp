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
	printf("Nhap n: ");
	scanf("%d", &n);
	int temp;
	for(int i = 0;i<n;i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d", &temp);
			
		// Điều kiện nhập
		if(CheckPrimeNumber(temp))
			a[i] = temp;
		else 
		{
			printf("So %d khong phai la so nguyen to\n",temp);
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
