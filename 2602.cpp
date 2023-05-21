#include<stdio.h>
#include<conio.h>

    void nhapmang(int a[],int n)
    {
	   for(int i=0;i<=n;i++)
    	{
		printf("\n\n\tNhap phan tu thu a[%d]=",i);
		scanf("%d",&a[i]);
     	}
    }
    void xuatmang(int a[],int n)
    {
       printf("\n\t mang : ");
        {
    	for(int i=0;i<=n;i++)
    	    printf("  %d  ",a[i]);
    	}
    }
       void hv ( int &a, int &b)
  {
    int temp = a;
    a = b;
    b = temp;

  }
    void BubleSort ( int a[], int n)   // noi bot
    {
    	int i, j;
    	for ( i=0; i<n-1;i++)
    	{
    	
    	   for(j=n-1; j>i;j--)
    	   {
    	   
    	       if(a[j]<a[j-1])
    	       {
    	       		hv(a[j],a[j-1]);
			   }
			   
    	    }
  		}	 
	}
int linearsearch( int a[], int n, int x)
{
   	printf("\n Nhap gia tri can tim: ");
   	scanf("%d",&x);
    	int i=0;
    	a[n]=x;
 	while (a[i]!=x)
    	i++;
	if (i==n)
    	return -1;
    else
	    return i;
}


void Inserttionsort ( int a[], int n)
{
	int pos,i;
	int x;
	for(int i=1;i<n;i++)
	{
		x=a[i];
		pos=i-1;
		while((pos >= 0)&&(a[pos]>x))
		{
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}
void ThemPhanTu(int a[], int index, int PhanTu, int &m){
    
    if(index <= 0){
        index = 0;
    }
    
    if(index >= m){
        index = m;
    }
    
    for(int i = m; i > index; i--){
        
        a[i] = a[i-1];
    }
    
    a[index] = PhanTu;
   
    m++;
}
  int main()
 {
 	int a[1000]; int n;int x; int m;
 	printf("\n Nhap n: ");
 	scanf("%d",&n);
 	nhapmang(a,n);
 	xuatmang(a,n);
 	BubleSort(a,n);
 	printf("\n Mang duoc sap xep la: ");
 	xuatmang(a,n);
 	int result=linearsearch(a,n,x);
 	if( result==-1)
 	printf(" Khong tim thay phan tu trong mang",x);
 	else
 	printf(" So can tim nam o vi tri so %d", result);
	int PhanTu;
	m++;
    printf(" \n NHAP PHAN TU CAN THEM:  ");
    scanf("%d",&PhanTu);
    a[m]=PhanTu;
    xuatmang(a,m);
    printf("\n Mang duoc sap xep la: ");
    
 	return 0; 
	 
}
