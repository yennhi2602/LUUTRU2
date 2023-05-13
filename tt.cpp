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
       printf("\n\tMang vua nhap la:");
        {
    	for(int i=0;i<n;i++)
    	    printf("  %d  ",a[i]);
    	}
    }
  int main()
 {
 	int a[10]; int n;
 	printf("\n Nhap n: ");
 	scanf("%d",&n);
 	nhapmang(a,n);
 	xuatmang(a,n);
 	return 0;
	 
}

