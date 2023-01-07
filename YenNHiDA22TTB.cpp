#include<stdio.h>
void nhapmang1c (int a[20], int n);
void xuatmang1c (int a[20], int n);
void tinhtich_mang (int a[20], int n);
void tim_max (int a[20], int n);
void tim_x (int a[20], int m, int n);
void sapxep (int a[20], int n);
void chen_x(int a[20], int n, int z);




int main()
{
	int a[20], n , m;
	  
	  printf("\n\n Nhap so nguyen duong n:  ");
	  scanf("%d",&n);
	  
	  
	  
nhapmang1c (a,n);
xuatmang1c (a,n);
tim_max (a,n);
tinhtich_mang (a,n);

printf("\n\n Nhap so phan tu x la: ");
scanf("%d",&m);
tim_x(a,m,n);
return 0;
}

// xay dung bai xuat mang 1 chieu
void xuatmang1c (int a[20], int n)
{
	printf("\n Cac phan tu trong mang la: ");
	for (int i=0;i<n;i++)
	printf("%d",a[i]);
}


// xay dung bai tinh tich mang
void tinhtich_mang (int a[20], int n)
{
	int Tich=1;
	for(int i=0;i<n;i++)
	Tich=Tich*a[i];
	printf("\n Tich trong mang la: %d",Tich);
}
// xay dung ham tinh so lon nhat
void tim_max (int a[20], int n)
{
	int b,y,max=0;
	for(int i=0;i<n;i++)
	{
		if (max <=a[i])
		max=a[i];
		if(max<=a[i])
		b=y;
		
		
	}
	
}

// xay dung ham tim x
void tim_x (int a[20], int m, int n)
{
	int i,dem=0;
	for (i=0;i<n;i++)
	{
		if (a[i]==m)
		printf("\n\n Gia tri %d cua phan tu a[%d] bang gia tri cua x",m,i);
		if (a[i]==m)
		dem++;
	}
}
