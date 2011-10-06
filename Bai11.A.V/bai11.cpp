#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);
bool Check1toN(int a[], int n);
void PrintResult(int a[],int n);

void main(){
	// Khai báo
	int n;
	int a[100];
	Input(a,n);
	PrintResult(a,n);
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

bool Check1toN(int a[], int n)
{
	int k;
	printf("Nhap k: ");
	scanf("%d",&k);
	for(int m = 1; m<=k;m++)
	{
		bool flag = false;
		for(int i=0;i<n;i++)
		{
			if(a[i] == m)
				flag = true;
		}
		if(flag == false)
			return false;
	}
	return true;
}

void PrintResult(int a[],int n)
{
	bool check = Check1toN(a,n);
	if (check)
		printf("\nOK");
	else
		printf("\nFalse");
}