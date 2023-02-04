#include<stdio.h>
#include<conio.h>
#include<string.h>


///yc1

int fibonacci(int n)
{
	if (n<0){
		return -1;
} else if (n==0 || n==1){
	return n;
} else {
	return fibonacci(n-1) + fibonacci (n-2);
}
}


int main ()
{
	int i;
	printf(" 10 so dau tien cua day so Fibonacci:  ");
	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", fibonacci(i));
		
	}
}



///yc2


long  tinhGiaithua(int n)
{
	if  (n > 0){
		return n* tinhGiaithua (n - 1);
	}else {
		return 1;
	}
}


int main()
{
	int n;
	printf("\n Nhap so nguyen duong n: ");
	scanf("%d",&n);
	printf("Giai thua cua %d la : %d \n", n , tinhGiaithua(n));
}

