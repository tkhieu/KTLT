#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);
bool CheckDuongTang(int a[], int n);
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

bool CheckDuongTang(int a[], int n)
{
	int hold = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] > 0)
		{
			if(a[i] < hold)
				return false;
			hold = a[i];
		}
	}
	return true;
}

void PrintResurt(int a[], int n)
{
	bool check = CheckDuongTang(a,n);
	if (check)
		printf("\nOK");
	else
		printf("\nFalse");
}