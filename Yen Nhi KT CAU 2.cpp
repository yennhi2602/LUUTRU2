#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define N 20
typedef struct node
{
	long stt;
    int chieurong ;
	int chieudai;
	int chieucao;
	int thetich;
}node;
typedef struct stack
 {
 	int top;
 	node list [N];
 }stack;
 void khoitao(stack &s)
    {
     s.top=-1;
    }
int empty  (stack s)
{
	return s.top==-1?1:0;
}  
int full (stack s)
{
	return s.top==N-1?1:0;
}
void push(stack &s,node x)
 {
 	if (!full(s))
 	s.list [++s.top]=x;
 }
node pop (stack &s)
{ node x;
	 if (!empty(s))
	 x=s.list[s.top--];
	 return x;
}
int main()
{
	int n;stack s;node x;
	int tl;char *t2;  char *t3;int t4;int t5;int t6;
	printf("\nNhap vao phan tu:");
	scanf("%d",&n);
	khoitao(s);
	for(int i=0;i<n;i++)
	{
		printf("\n\t nhap so thu tu:");
		scanf("%d",&x.stt);
		printf("\n Nhap chieu rong:");
		fflush(stdin);
		scanf("%d",&x.chieurong);
		printf("\n Nhap chieu dai:");
		fflush(stdin);
	    scanf("%d",&x.chieudai);
	    printf("\n Nhap chieu cao:");
	    fflush(stdin);
	    scanf("%d",&x.chieucao);
		if((x.chieurong>0)&&(x.chieudai>0))
		{
			x.thetich=x.chieudai*x.chieurong*x.chieucao;
			printf("\n The tich : %dm3",x.thetich);
		}
		else
		{ 
		printf("\n Chieu rong hoac chieu dai khong hop le.");
	    }
		fflush(stdin);
		push(s,x);
	}
while( !empty(s))
{
	x=pop(s);
	printf("\n|--------------------------------------------------------------------------------------------|\n");
	printf("\n|stt  |  Chieu rong   |   Chieu dai   | Chieu cao        |     The tich    |\n");
	printf("\n|%d  |      %dm   |    %dm        |           %dm      |      %dm3         |\n",x.stt,x.chieurong,x.chieudai,x.chieucao,x.thetich);
	printf("\n|--------------------------------------------------------------------------------------------|\n");
}
}
