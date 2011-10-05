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
	int k;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap gioi han k: ");
	scanf("%d", &k);
	int temp;
	for(int i = 0;i<n;i++)
	{
		printf("Nhap a[%d]: ",i);
			scanf("%d", &temp);
		if(i>0)
		{			
			if(0 <= temp && temp <= k)
				a[i] = temp;
			else 
			{
				printf("So ban vua nhap > %d\n",k);
				i--;
			}
		}else
		{
			a[i] = temp;
		}
		
	}
}