#include <stdio.h>
#include <conio.h>

void Input(int a[], int &n);


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
	for(int i = 0;i<n;i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d", &a[i]);
	}
}