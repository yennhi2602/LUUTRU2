#include <stdio.h>

// H�m nh?p ma tr?n
void nhapMaTran(int a[][100], int n) {
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// H�m in ma tr?n
void inMaTran(int a[][100], int n) {
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// H�m t?m ph?n t? l?n nh?t tr�n h�ng th? x
void timMaxHang(int a[][100], int n, int x) {
    int max = a[x][0];
    for (int j = 1; j < n; j++) {
        if (a[x][j] > max) {
            max = a[x][j];
        }
    }
    printf("Phan tu lon nhat tren hang thu %d: %d\n", x, max);
}

// H�m t?m ph?n t? nh? nh?t tr�n c?t th? y
void timMinCot(int a[][100], int n, int y) {
    int min = a[0][y];
    for (int i = 1; i < n; i++) {
        if (a[i][y] < min) {
            min = a[i][y];
        }
    }
    printf("Phan tu nho nhat tren cot thu %d: %d\n", y, min);
}

// H�m t�nh t?ng c�c ph?n t? tr�n h�ng k
void tinhTongHang(int a[][100], int n, int k) {
    int tong = 0;
    for (int j = 0; j < n; j++) {
        tong += a[k][j];
    }
    printf("Tong cac phan tu tren hang %d: %d\n", k, tong);
}

// H�m t�nh t?ng c�c ph?n t? tr�n c?t m
void tinhTongCot(int a[][100], int n, int m) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i][m];
    }
    printf("Tong cac phan tu tren cot %d: %d\n", m, tong);
}

// H�m t�nh t?ng c�c ph?n t? c� gi� tr? ch?n tr�n ma tr?n
void tinhTongChan(int a[][100], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) {
                tong += a[i][j];
            }
        }
    }
    printf("Tong cac phan tu co gia tri chan: %d\n", tong);
}

// H�m ki?m tra du?ng ch�o c� b?ng 0 hay kh�ng
int kiemTraDuongCheo(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i][i] != 0) {
            return 0;
        }
    }
    return 1;
}

// H�m ki?m tra c�c ph?n t? c� nh? hon ho?c b?ng 1 hay kh�ng
int kiemTraNhoHonMot(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 1) {
                return 0;
            }
        }
    }
    return 1;
}

// H�m ki?m tra m?ng c� d?i x?ng qua du?ng ch�o ch�nh hay kh�ng
int kiemTraDoiXung(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int a[100][100];
    int n;

    printf("Nhap kich thuoc ma tran: ");
    scanf("%d", &n);

    nhapMaTran(a, n);
    inMaTran(a, n);

    int x, y, k, m;
    printf("Nhap x: ");
    scanf("%d", &x);
    timMaxHang(a, n, x);
    printf("Nhap y: ");
    scanf("%d", &y);
    timMinCot(a, n, y);

    printf("Nhap k: ");
    scanf("%d", &k);
    tinhTongHang(a, n, k);

    printf("Nhap m: ");
    scanf("%d", &m);
    tinhTongCot(a, n, m);

    tinhTongChan(a, n);

    if (kiemTraDuongCheo(a, n)) {
        printf("Duong cheo bang 0\n");
    } else {
        printf("Duong cheo khac 0\n");
    }

    if (kiemTraNhoHonMot(a, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    if (kiemTraDoiXung(a, n)) {
        printf("DOI XUNG\n");
    } else {
        printf("KHONG DOI XUNG\n");
    }

    return 0;
}
