#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);
void PrintResurt(int a[], int n);
bool CheckMangTang(int a[],int n);


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

bool CheckMangTang(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i] > a[i+1])
			return false;
	}
	return true;
}

void PrintResurt(int a[], int n)
{
	bool check = CheckMangTang(a,n);
	if (check)
		printf("\nOK");
	else
		printf("\nFalse");
}