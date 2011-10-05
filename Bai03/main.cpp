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
	int temp;
	for(int i = 0;i<n;i++)
	{
		printf("Nhap a[%d]: ",i);
			scanf("%d", &temp);
		if(i>0)
		{			
			if(temp < a[i-1])
				a[i] = temp;
			else 
			{
				printf("So ban vua nhap be hon a[%d]\n",i-1);
				i--;
			}
		}else
		{
			a[i] = temp;
		}
		
	}
}