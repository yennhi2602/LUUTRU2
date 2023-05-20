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

int max ( int a[], int n)
{

	int max=a[0];
	for ( int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
int  min ( int  a[], int n)
{
	int min=a[0];
	for( int i=1;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	return min;
}
void tong( int a[], int n)
{
	int tong=0;
	for( int i=0;i<n;i++)
	{
		tong +=a[i];
	}
	printf("\n tong cong : %d ",tong);
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
  int main()
 {
 	int a[1000]; int n;int x;
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
 	max(a,n);
 	printf("\n Phan tu lon nhat la : %d", max(a, n));
 	min(a,n);
 	printf("\n Phan tu nho nhat la : %d ", min(a,n));
 	tong(a,n);
 	printf("\n Nhap so ban can chen: %d ");
	Inserttionsort(a,n);
 	return 0; 
	 
}
