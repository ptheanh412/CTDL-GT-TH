#include <iostream>
using namespace std;
// https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-tuyen-tinh-linear-search
void nhapMang(int a[], int n){
	for (int i = 0; i< n;i++){
		cout << "a[" << i<<"] = ";
		cin >> a[i];
	}
}
int LinearSearch(int a[], int x, int n){
	for (int i = 0; i <n; i++){
		if (a[i]==x)
			return i;
	}
	return -1;
}
int main(){
	int n;
	do{
		cout << "Nhap so luong ptu: ";
		cin>> n;
		if (n <= 0){
			cout << "Nhap lai!!!";
		}
	}while (n <= 0);
	int a[n];
	nhapMang(a,n);
	int x;
	cout << "Nhap x: ";
	cin >> x;
	for (int i = 0; i<n;i++){
		cout<<x<<" tai vi tri thu " << LinearSearch(a,x,n) << endl;
	}
	
}
