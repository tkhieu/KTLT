#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);
bool CheckLuonSong(int a[], int n);
void PrintResult(int a[],int n);
int CheckFirst(int a[], int n);

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

bool CheckLuonSong(int a[], int n)
{
	if(CheckFirst(a,n) == 0) return false;
	else
	{
		for(int m = 0; m<n-1;m+=2)
		{
			bool flag = true;
			if(CheckFirst(a,n) == 1)
				if(a[m] - a[m+1] < 0)
					flag = false;
			if(CheckFirst(a,n) == -1)
				if(a[m] - a[m+1] > 0)
					flag = false;
			if(flag == false)
				return false;
		}
	}
	return true;
}

int CheckFirst(int a[], int n)
{
	int check;
	if (a[0] - a[1] > 0) check =  1;
	else if (a[0] - a[1] < 0) check = -1;
	else check = 0;
	return check;
}

void PrintResult(int a[],int n)
{
	bool check = CheckLuonSong(a,n);
	if (check)
		printf("\nOK");
	else
		printf("\nFalse");
}