#include<stdio.h>

void nhapmang(int a[10][10],int m,int n);
void xuatmang(int a[10][10],int m,int n);
void max(int a[10][10],int m,int n);
void min(int a[10][10],int m,int n);
void dem(int n);
void songuyento(int a[10][10],int m,int n);
void tim_x(int a[10][10],int m,int n);
void yenngua(int a[10][10],int m,int n);
void sap_xep(int a[10][10],int m,int n);
void tong(int a[10][10],int m,int n);
void chan(int a[10][10],int m,int n);
void le(int a[10][10],int m,int n);
void tongtichAB(int A[10][10],int B[10][10]);


// bai 1
int main()
{
	int a[10][10],m,n,A[10],B[10];
	printf("\n\n Nhap so dong m:");
	scanf("%d",&m);
	while (m<0||m>10){
	
		   printf("\n\n Vuot gia tri cho phep . Vuilong nhap lai m :");
      scanf("%d",&m);
  }
	printf("\n\n Nhap so cot n:");
	scanf("%d",&n);
	while(n<0||n>10){
	
	printf("\n\n Vuot gia tri cho phep vui long nhap lai n:");
	scanf("%d",&n);}

	

    nhapmang(a,m,n);
    xuatmang(a,m,n);
    max(a,m,n);
    min(a,m,n);
    songuyento(a,m,n);
    tim_x(a,m,n);
    yenngua(a,m,n);
    sap_xep(a,m,n);
    tong(a,m,n);
    chan(a,m,n);
    le(a,m,n);
    tongtichAB(A,B);
}
// Nhap ma tran  
void nhap(int a[10][10], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\n2.Nhap a[%d][%d]=",i,j); 
			scanf("%d",&a[i][j]);
		}
	}
}

 //Xuat ma tran 
void xuat (int a[10][10], int m, int n){
	printf("\n3.Ma tran a:\n"); 
	for(int i = 0; i< m; i++){
		for(int j = 0; j< n; j++){
			printf("|%3d |",a[i][j]);
		}
		printf("\n\n");
	}
}

// MAX ,MIN 
//	MAX 
void max(int a[10][10],int m,int n){
	int sample = 0,x,y;
    	for(int i = 0; i < m; i++){
	    	for(int j = 0; j< n; j++){
	       		if (a[i][j] >= sample){
		   			sample = a[i][j];
		   			x = i;
		   			y = j;
		   		}
			}
		}
		printf("\nPhan tu lon nhat trong mang a la phan tu a[%d][%d], co gia tri:%d.",x,y,a[x][y]);
}
	//MIN 
void min(int a[10][10], int m, int n){
	int sample,x,y;
    	sample = a[0][0];
    	for(int i = 0; i < m; i++){
	    	for(int j = 0; j < n; j++){
	       		if (a[i][j] <= sample){
		   			sample = a[i][j];
		   			x = i;
		   			y = j;
		   		}
			}
		}
		printf("\nPhan tu nho nhat trong mang a la phan tu a[%d][%d], co gia tri:%d.",x,y,a[x][y]);
}

// Dem va tinh tong so nguyen to
	//5.1. Set up 
int dem(int n){
	int count = 0;
    	for(int i = 1; i <= n; i++){
	   		if (n%i == 0)
				count++;
		}
	return count;
}
	// Dem va tinh tong	  
void snt(int a[10][10], int m, int n){
     int x = 0, summary = 0;
     	for(int i = 0; i < m; i++){
	    	for(int j = 0; j< n; j++){
		   		if(dem(a[i][j]) == 2){
		     		printf("\nGia tri %d cua phan tu a[%d][%d] la so nguyen to.\n",a[i][j],i,j);
		     		summary = summary + a[i][j];
		     		x++;
		   		}
			}
	 	}
	 	if(x == 0) 
	 	printf("\nKhong co gia tri nao trong ma tran a la so nguyen to.");
		else      
		printf("\nVay co %d gia tri trong ma tran a la so nguyen to va tong cua chung bang: %d.",x,summary);  
}

// Nhap x, tim va in vi tri x 
void timx(int a[10][10],int m, int n){
     int x, y = 0;
     	printf("\n6.1.Nhap gia tri cho x="); 
		scanf("%d",&x);
    	for(int i = 0; i < m; i++){
	    	for(int j = 0; j < n; j++){
		   		if (a[i][j] == x){
		      		printf("\nGia tri x xuat hien tren ma tran a tai vi tri a[%d][%d].",i,j);
		      		y++;
		   		}
			}
	 	}
	 	if( y == 0) 
		printf("\nGia tri cua x khong xuat hien trong ma tran a.");
}

// Yen ngua: nho nhat dong, lon nhat cot. In cac diem do 
void yenngua(int a[10][10],int m, int n){
	 int x, y, max, count = 0, ncount = 0;
     	for(int k = 0; k < m; k++){
     		max=a[k][0];
	    	for(int i = 0; i < n; i++){
	       		if(a[k][i] <= max){
		        	max = a[k][i];
		           	x = i ;
		   		}
			}
			for (int j = 0; j < m; j++){
		   		if (max < a[j][x]){
			  		count++;
				}
			}
			if(count == 0){    
				printf("\nPhan tu a[%d][%d] la YEN NGUA.",k,x);
			    ncount++;
		    }
	    	count=0;
	 	} 
	 	if(ncount == 0) 
		printf("\n7.Khong co gia tri nao la YEN NGUA trong ma tran a.");
}

//Sap xep tang dan tu tren xuong duoi, tu trai qua phai 
void sapxep(int a[10][10],int m,int n){
	int sample, nsample;
	// Sap xep tu tren xuong duoi 
    	for(int i = 0; i < n; i++){
	   		for(int j = 0; j < m-1; j++){
	      		for(int k = j + 1; k < m; k++){
		     		if(a[j][i] > a[k][i]){ 
		        		sample = a[j][i];
		        		a[j][i] = a[k][i];
		        		a[k][i] = sample;
			 		}
		  		}
		
	   		}
		}
	// Sap xep tu trai qua phai 
		for(int l = 0; l < m; l++){
	   		for(int p = 0; p < n-1; p++){
	      		for(int q = p+1; q < n; q++){
		     		if (a[l][p]>a[l][q]){ 
		        		nsample = a[l][p];
		        		a[l][p] = a[l][q];
		        		a[l][q] = nsample;
			 		}
		  		}
		
	   		}
		}
		printf("\nMang a sau khi duoc sap xep lai la: \n");
		for(int r = 0; r < m; r++){
	    	for(int s = 0; s < n; s++){
		   		printf("|%3d |",a[r][s]);
			}
			printf("\n\n");
	 	}  
}

// Tong pt nam tren duong cheo chinh  
void tong(int a[100][100],int m,int n){
	int x = 0;
		for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){  
		   		if(i == j) 
				   x = x + a[i][j]; 		
	 		}
	 	}
	 	printf("\nTong cac phan tu nam tren duong cheo chinh cua ma tran a la: %d",x);
}

//Dem so chan,tam giac duong cheo chinh 
void chan(int a[10][10],int m,int n){
	int count = 0;
		for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
		   		if(i == j){
		   	  		for(int k = j+1 ; k < n; k++){
		   	  	 		if(a[i][k] % 2 == 0) 
						count++;
		   	  		}
		   		}
			}
    	}
    	if(count == 0) 
		printf("\nKhong co phan tu nao la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran a.");
    	else        
		printf("\nCo %d phan tu la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran a, ma khong ke duong cheo chinh.",count);
}

// Tim va in so le, tam giac duoi cua duong cheo phu 
void le(int a[10][10],int m,int n){
	printf("\nCac so le nam trong tam giac duoi cua duong cheo phu, ma tinh luon duong cheo phu:");
	printf("\n\n");
	int count = 0;
		for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
		   		if( j + i == n-1){
		       		for(int k = j; k< n; k++){
		   	   	  		if (a[i][k] % 2 == 1){
		   	   	  	 		count++;
		   	   	  	 	printf("|%3d |",a[i][k]);
		   	   	  		}
		   	   	  
			   		}
		   		}
	    	}
    	}
    	if(dem == 0) 
		printf("\nKhong co so le nao nam trong tam giac tren cua duong cheo phu trong ma tran a.");
}

//Nhap 2 ma tran A, B. Tong, tich hai ma tran 
void tongtichAB(int A[10][10],int B[10][10]){
	printf("\nXay Dung ma tran A va B :");
	int m, n, product = 1, summary = 0;
		printf("\nNhap so dong m cho  ma tran A va B: "); 
	 	scanf("%d",&m);
	 	printf("\nNhap so cot n cho  ma tran A va B: "); 
	 	scanf("%d",&n);
	 	printf("\nNhap ma tran A:");
	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		printf("\nA[%d][%d]=",i,j); 
				scanf("%d",&A[i][j]);
			} 
	 	}
	 	printf("\nMa tran A:\n");
 	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		printf("|%3d |",A[i][j]);
			}
			printf("\n\n");
     	}
	 	printf("\nNhap ma tran B:");
	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		printf("\nB[%d][%d]=",i,j); 
				scanf("%d",&B[i][j]);
			} 
	 	}	
	 	printf("\nMa tran B:\n");
 	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		printf("|%3d |",B[i][j]);
			}	 
			printf("\n\n");
     	}
	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		summary=summary+A[i][j]+B[i][j];
	 	   		product=product*A[i][j]*B[i][j];
	 		}
	 	}
	 	printf("\nTong cac phan tu cua ma tran A va B: %d.",summary);
     	printf("\nTich cac phan tu cua ma tran A va B: %d.",product);
}

