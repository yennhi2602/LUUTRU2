#include<stdio.h>
#include<stdlib.h>


int nhap2c(int *a,int n, int m);
int xuat2c(int *a,int n, int m);
int sapxep(int *a,int n, int m);
int main()
{
	int *a,n ,m;
	a=(int*)calloc(26,sizeof(int));
	printf("\n\n\n nhap n: ");scanf("%d", &n);
	printf("\n\n\n nhap m: ");scanf("%d", &m);
	nhap2c(a,n,m);
	xuat2c(a,n,m);

	sapxep(a,n,m);

}
int nhap2c(int *a, int n, int m)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	{
		printf("\n Nhap phan tu thu a[%d][%d]: ",i,j);
		scanf("%d",(a+i*n+j));
	}
}
int xuat2c(int *a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\t%d",*(a+i*n+j));
		}
		printf("\n");
	}
}
int sapxep(int *a,int n,int m)
{
	int tam, tich=m*n;
	for(int i=0;i<tich-1;i++)
	for(int j=i+1;j<tich;j++)
	{
		if(*(a+i)>*(a+i))
		{
			tam=*(a+i);
			*(a+i)=*(a+
			j);
			*(a+j)=tam;
			
		}
	}
	return 0;
}
