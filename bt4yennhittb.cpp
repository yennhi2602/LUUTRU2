#include<stdio.h>

void nhapmang(int a[10][10],int m,int n);
void xuatmang(int a[10][10],int m,int n);
// bai 1
int main()
{
	int a[10][10],m,n;
	printf("\n\n Nhap so dong m:");
	scanf("%d",&m);
	printf("\n\n Nhap so cot n:");
	scanf("%d",&n);
	nhapmang(a,m,n);
	xuatmang(a,m,n);
return 0;
	
}
// bai 2 nhap ma tran so nguyen m dong,n cot
void nhapmang(int a[10][10],int m,int n)
{
	for(int i=0;i<10;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("\n\n Nhap a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
}
}

void xuatmang(int a[10][10],int m,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		  printf("%d",&a[i][j]);
	}
	
	printf("\n\n");
}
}


