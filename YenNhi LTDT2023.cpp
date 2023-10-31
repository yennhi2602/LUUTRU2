
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Nhap phan tu thu " << i + 1 << ": ";
    cin >> arr[i];
  }
  cout << "Cac phan tu cua mang la: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  int x;
  cout << "Nhap x: ";
  cin >> x;
  cout << "arr[" << x << "] = " << arr[x] << endl;

  int max_value = arr[0];
  int max_index = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] > max_value) {
      max_value = arr[i];
      max_index = i;
    }
  }
  cout << "Phan tu lon nhat trong mang la: arr[" << max_index << "] = " << max_value << endl;
  int min_value = arr[0];
  int min_index = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] < min_value) {
      min_value = arr[i];
      min_index = i;
    }
  }
  cout << "Phan tu be nhat trong mang la: arr[" << min_index << "] = " << min_value << endl;
  cout << "Cac so le trong mang la: ";
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      cout << arr[i] << " ";
    }
  }
  cout << endl;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  cout << "Tong gia tri cua cac phan tu trong mang la: " << sum << endl;

  return 0;
}
