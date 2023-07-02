#include<stdio.h>
#include<conio.h>


void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n Nhap phan tu thu a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void  xuatmang(int a[], int n)
{
	printf("\n mang : ");
	{
		for( int i=0;i<n;i++)
		printf(" %d ", a[i]);
	}
}

void  hv(int *a, int *b)
{
	int temp= *a;
	*a = *b;
	*b=temp;
}

int phanhoach(int a[], int l, int r)
{
	int j;
	int x=a[r];
	int i=l-1;
	for( int j=l;j<r;j++)
	{
		if (a[j]>=x)
		{
			i++;
			hv(&a[i],&a[j]);
		}
	}
	hv(&a[i+1],&a[r]);
	return i+1;
}
void quicksort(int a[], int l, int r)
{
	if(l<r)
	{
		int p= phanhoach(a,l,r);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
}



int main()
   {
   	int a[20]; int x;
   	
   	int n=sizeof(a);
   	sizeof(a[0]);
   	int l ; int r;
   	printf("\n Nhap so phan tu n: ");
   	scanf("%d",&n);
   	nhapmang(a,n);
   	printf("\n Mang da nhap la: ");
   	xuatmang(a,n);
   	quicksort(a,0,n-1);
   	printf("\n Mang da sap xep la: ");
   	xuatmang(a,n);
   	return 0;
   }
