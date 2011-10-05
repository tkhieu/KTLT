#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);
bool CheckingTheNumber(int k,int a[],int i);


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
		if(CheckingTheNumber(temp,a,i))
		{
			a[i] = temp;
		} else
		{
			printf("Ban da nhap khong dung am - duong.\n");
			i--;
		}
	}
}

bool CheckingTheNumber(int k,int a[],int i)
{
	if(k*a[i-1] < 0)
		return true;
	else
		return false;
}