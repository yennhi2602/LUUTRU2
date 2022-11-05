#
#include <stdio.h>
void nhapmang1c (int v[20],int d );
void xuatmang1c (int v[20],int d );
void tinhtich_mang (int v[20],int d);
void Tim_max(int v[20],int d );
void Tim_x(int v[20],int y,int d);
void sapxep(int v[20],int d);
void CHen_x(int v[20],int d,int b);
void TongNT(int v[20],int d);
void xoa1(int a[20],int*d,int vitri);
void xoa2(int v[20],int d);
int a;

int main()
{ 
    int v[20],d,y;
    
    	printf("\n\n Nhap so nguyen duong n: ");
    	scanf("%d",&d);
     
nhapmang1c (v,d);
xuatmang1c (v,d);
Tim_max (v,d);
tinhtich_mang (v,d);
printf("nhap so phan tu x la:=");
scanf("%d",&y);
Tim_x(v,y,d);
sapxep(v,d);
CHen_x(v,y,d);
TongNT(v,d);
xoa2(v,d);
return 0;
}

// xay dung bai nhap mang 1 chieu
void nhapmang1c (int v[20],int d )
 {
 	for (int i=0;i<d;i++)
       {    
 		printf("\n\n NHap so phan tu v[%d]=",i);
 		scanf("%d",&v[i]);
 		}
 		
}

// xay dung bai xuat mang 1  chieu
void xuatmang1c (int v[20],int d)
{
	printf("\n\n cac phan tu trong mang la:");
	for (int i=0;i<d;i++)
	printf("%d",v[i]);
	}

// xay dung bai tinh tich mang 
void tinhtich_mang(int v[20],int d)
{ 
    int Tich=1;
    for(int i=0;i<d;i++)
    Tich=Tich*v[i];
    printf("\n Tich trong mang la:%d",Tich);
    }
// xay dung ham tim so lon nhat
void Tim_max(int v[20],int d )
{ 
   int e,t,max=0;
   for( int i=0;i<d;i++)
   {
   	if (max <=v[i])
   	max=v[i];
   	if(max<=v[i])
   	e=t;
}
}
// xay dug ham tim x
void Tim_x(int v[20],int y,int d)
{
	int i,dem=0;
	for (i=0;i<d;i++)
	{
		if (v[i]==y)
		  printf("\n\n Gia tri %d cua phan tu v[%d] bang gia tri cua x",y,i);
		if (v[i]==y)
		dem++;
		}
}
// xay dung ham dem va tinh tong cac phan tu
int ktnt(int n)
{
	int demktnt=0;
	int i;
	 for (i=2;i<=n;i++)
	   {
	   	 if(a%i==0)
	   	 demktnt++;
	   }
return demktnt;
}

void TongNT(int v[20],int d)
{
	int i,n,dem=0;
	int tong=0;
	int demktnt=0;
  for (i=0;i<d;i++)
	{
		if (ktnt(v[i])==1)
		demktnt++;
		if(ktnt(v[i])==1)
		tong=tong+v[i];
}
printf("\n\n co %d phan tu la so nguyen to trong mang v",demktnt);
printf("\n\n tong cac phan tu la so nguyen to trong mang v= %d",tong);
}
// xay dung ham sap xep mang tang dan
void sapxep(int v[20],int d)
{
	int min;
	for(int i=0;i<d-1;i++)
	{
		for(int c=i+1;c<d;c++)
		{
			if(v[i]>v[c])
		{
			min=v[i];
			v[i]=v[c];
			v[c]=min;
		}
}
}
printf("\n\n Sap xep lai mang theo gia tri tang dan:");
 for(int i=0;i<d;i++)
 {
 	printf("\n\n a[%d]=%d",i,v[i]);
 }
}
 
// xay dung ham chen x
void CHen_x(int v[20],int d,int b)
{
	printf("\n\n chen gia tri %d cua b vao phan tu v[%d]",b,d);
	v[d]=b;
	printf("\n\n mang v sau khi chen b:");
	for(int i=0;i<d+1;i++)
	{
		printf("\n\n v[%d]=%d",i,v[i]);
	}
}
// xay dung ham xoa cac vi tri cu the
void xoa1(int a[20],int*d,int vitri)
{
	for(int i=vitri;i<*d-1;i++)
	{
		a[i]=a[i+1];
}
*d--;
}
// xay dung ham xoa phan tu co gia tri bang k
void xoa2(int v[20],int d)
{
	int k;
	printf("\n\n Nhap k=");
	scanf("%d",&k);
	for (int i=0;i<d;i++)
	{
		if (k==v[i])
		xoa1(v,&d,i);
}
printf("\n\n Mang a sau kHi xoa cac phan tu co gia tri bang k:");
for (int i=0;i<d;i++)
{
	printf("\n v[%d]=%d",i,v[i]);
	
}
	}
