#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);
bool CheckDoiXung(int a[], int n);
void PrintResurt(int a[], int n);


void main(){
	// Khai báo
	int n;
	int a[100];
	Input(a,n);
	PrintResurt(a,n);
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

bool CheckDoiXung(int a[], int n)
{
	int k = n/2;
	for(int i = 0;i<k;i++)
	{
		if(a[i] != a[n-1-i])
			return false;
	}
	return true;
}

void PrintResurt(int a[], int n)
{
	bool check = CheckDoiXung(a,n);
	if (check)
		printf("\nOK");
	else
		printf("\nFalse");
}