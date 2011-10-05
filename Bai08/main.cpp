#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);
bool CheckEvenNumber(int k, int a[], int i);
bool CheckOddNumber(int k, int a[], int i);


void main(){
	// Khai báo
	int n;
	int a[100];
	Input(a,n);
	getch();
}

void Input(int a[], int &n)
{
	printf("Nhap n: ");
	scanf("%d", &n);
	int temp;
	for(int i = 0;i<n;i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d", &temp);
		if (i>1)
		{
			if(temp % 2 == 0)
			{
				if(CheckEvenNumber(temp,a,i))
				{
					a[i] = temp;
				} else
				{
					printf("Ban vua nhap so chan khong tang: %d \n",temp);
					i--;
				}
			} 
			else 
			{
				if(CheckOddNumber(temp,a,i)) {
					a[i] = temp;
				} else 
				{
					printf("Ban vua nhap so le khong giam: %d \n",temp);
					i--;
				}
			}
		}
	}
}

bool CheckEvenNumber(int k, int a[], int i)
{
	for(int j=i-1;i<=0;j--)
	{
		if(a[j] % 2 == 0)
		{
			if(k > a[j]){
				return true;
			} else {
				return false;
			}
		}
	}
}

bool CheckOddNumber(int k, int a[], int i)
{
	for(int j=i-1;i<=0;j--)
	{
		if(a[j] % 2 != 0)
		{
			if(k < a[j]){
				return true;
			} else {
				return false;
			}
		}
	}
}