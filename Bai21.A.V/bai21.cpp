#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);
int CheckMangCon(int a[], int b[], int n, int m);
void PrintResurt(int a[], int b[], int n, int m);

void main(){
	// Khai báo
	int n,m;
	int a[100];
	int b[100];
	Input(a,n);
	Input(b,m);
	PrintResurt(a,b,n,m);
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

int CheckMangCon(int a[], int b[], int n, int m)
{
	for(int i=0;i<n;i++)
	{
		bool flag = true;
		for(int j=0;j<m;j++)
		{
			if(a[i+j] != b[j])
				flag = false;
		}
		if(flag)
			return i;
	}
	return -1;
}

bool CheckXuatHien(int a[], int b[], int n, int m)
{
	for(int j=0;j<m;j++)
	{
		bool flag = false;
		for(int i=0;i<n;i++)
		{
			
			if(b[j] == a[i])
				flag = true;
		}
		if(!flag)
			return false;
	}
	return true;
}

bool CheckHoanVi(int a[], int b[], int n, int m)
{
	if(n != m) return false;
	for(int i = 0;i<n;i++)
	{
		if(a[i] != b[n-i])
			return false;
	}
	return true;
}

void PrintResurt(int a[], int b[], int n, int m)
{
	int checkmc = CheckMangCon(a,b,n,m);
	if (checkmc == -1)
		printf("\nFalse");
	else if(checkmc >=0 )
		printf("\nOK - Vi tri: %d",checkmc);

	bool checkxh = CheckXuatHien(a,b,n,m);
	if (checkxh == false)
		printf("\nFalse");
	else if(checkxh == true )
		printf("\nOK");

	bool checkhv = CheckHoanVi(a,b,n,m);
	if (checkhv == false)
		printf("\nFalse");
	else if(checkhv == true )
		printf("\nOK");
}