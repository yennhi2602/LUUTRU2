#include<stdio.h>
void nhapmang1c (int v[20],int d );
void xuatmang1c (int v[20],int d );
void tinhtich_mang (int v[20],int d);
void Tim_max(int v[20],int d );
void Tim_x(int v[20],int y,int d);
void sapxep(int v[20],int d);
void CHen_x(int v[20],int d,int b);
int a;

int main()
{ 
    int a[20],n;
    
    	printf("\n\n Nhap so nguyen duong n: ");
    	scanf("%d",&n);
     
nhapmang1c (a,n);
return 0;
}

// xay dung bai nhap mang 1 chieu
void nhapmang1c (int v[20],int d )
 {
 	for (int i=0;i<d;i++)
       {    
 		printf("\n NHap so phan tu v[%d]=",i);
 		scanf("%d",&v[i]);
 		}
 		
}

// xay dung bai xuat mang 1  chieu
void xuatmang1c (int v[20],int d)
{
	printf("\n cac phan tu trong mang la:");
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
