#include<stdio.h>
#include<conio.h>

    void nhapmang(int a[],int n)
    {
	   for(int i=0;i<n;i++)
    	{
		printf("\n\n\tNhap phan tu thu a[%d]=",i);
		scanf("%d",&a[i]);
     	}
    }
    void xuatmang(int a[],int n)
    {
       printf("\n\t mang : ");
        {
    	for(int i=0;i<n;i++)
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

  int main()
 {
 	int a[10]; int n;int x;
 	printf("\n Nhap n: ");
 	scanf("%d",&n);
 	nhapmang(a,n);
 	xuatmang(a,n);
 	BubleSort(a,n);
 	printf("\n Mang da sap xep la: ");
 
 	xuatmang( a, n);
 	int result=linearsearch(a,n,x);
 	if( result==-1)
 	printf(" Khong tim thay phan tu trong mang",x);
 	else
 	printf(" So can tim nam o vi tri so %d", result);
 	return 0; 
	 
}
