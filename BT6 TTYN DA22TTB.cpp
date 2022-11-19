#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct SinhVien
{
	char  Masv[10];
	char  Hotensv[30];
	char  Phai[10];
	int   Namsinh;
	char  Nganhhoc[30];
	float Kqcuoikhoa;
	char  Xeploai[20];
	char  Quequan[30];
};


typedef struct SinhVien SINHVIEN;
void TIMSV(SINHVIEN a[], int n);
void INGX(SINHVIEN a[], int n);
void Sapxep(SINHVIEN a[], int n);
void Nhapsv(SINHVIEN &n);
void NhapsvN(SINHVIEN a[], int n);
void Xuatsv(SINHVIEN);
void XuatsvN(SINHVIEN a[], int n);

int main()
{
	int n;
	 SINHVIEN x, a[10];
	 printf("\n Nhap so luong sinh vien ");
	 scanf("%d",&n);
	 NhapsvN(a,n);
	 XuatsvN(a,n);
	 printf("\n An phim bat ky de in DS sap xep ");
	 getch();
	 Sapxep(a,n);
	 XuatsvN(a,n);
	 printf("\n An phim bat ky de in DS Gioi_Xuat_sac ");
	 getch();
	 INGX(a,n);
	  printf("\n An phim bat ky de tim SV ");
	 getch();
	 TIMSV(a,n);
}

void Nhapsv(SINHVIEN &x)
{
	fflush(stdin);
	printf("\n Nhap Ma SV: ");
	gets(x.Masv);
	
	//sacnf("%d",&x.Masv);
	    fflush(stdin);
	printf("\n Nhap ho ten: ");
	gets(x.Hotensv);
	    fflush(stdin);
	printf("\n Nhap phai: ");
	gets(x.Phai);
	    fflush(stdin);
	printf("\n Nhap Nganh hoc: ");
	gets(x.Nganhhoc);
	    fflush(stdin);
	printf("\n Nhap Que quan: ");
	gets(x.Quequan);
	
	
	
	
do
{
	printf("\n Nhap Nam sinh: ");
	scanf("%d",&x.Namsinh);
}while(x.Namsinh<1980 || x.Namsinh>2010);


do
{
	printf("\n Nhap KQ cuoi khoa: ");
	scanf("%f",&x.Kqcuoikhoa);
}while(x.Kqcuoikhoa<0 || x.Kqcuoikhoa>4);


fflush(stdin);
      if(x.Kqcuoikhoa<=1.5)
        {
        	strcpy(x.Xeploai,"Yeu");
        }
      else
           if(x.Kqcuoikhoa<=2.5)
             {
             	strcpy(x.Xeploai,"Trung_binh");
             }
             else
                  if(x.Kqcuoikhoa<=3.0)
                    {
                    	strcpy(x.Xeploai,"Kha");
                    }
                    else
                         if(x.Kqcuoikhoa<=3.8)
                           {
                           	strcpy(x.Xeploai,"Gioi");
                           }
                           else
                              {
                              	strcpy(x.Xeploai,"Xuat sac");
                              }
}

void NhapsvN(SINHVIEN a[], int n)
{
	for(int i=0;i<n;i++)
	 {
	 	printf("\n Nhap sinh vien thu %d",i+1);
	 	Nhapsv(a[i]);
	 }
}


void Xuatsv(SINHVIEN x)
{
	printf("|     |                  |      |          |           |            |          |          |",x. Masv,x.Hotensv,x.Phai, x.Namsinh,x.Nganhhoc,x.Kqcuoikhoa,x.Xeploai,x.Quequan);
	
}


void XuatsvN(SINHVIEN a[], int n)
{ system("cls");
printf("|Ma SV| Ho ten sinh vien | Phai | Nam sinh | Nganh hoc |KQ cuoi khoa| Xep loai | Que quan |");

for(int i=0;i<n;i++)
   {
   	
printf("\n|-----|------------------|------|----------|-----------|------------|----------|----------|\n");
    Xuatsv(a[i]);
   }
}

void Sapxep(SINHVIEN a[], int n)
{ SINHVIEN tmp;
    for(int i=0)
	
}
