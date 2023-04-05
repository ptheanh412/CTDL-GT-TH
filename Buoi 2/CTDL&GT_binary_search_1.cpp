#include <iostream>
using namespace std;
// https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-nhi-phan-binary-search
void nhapMang(int a[], int n){
	for (int i = 0; i< n;i++){
		cout << "a[" << i<<"] = ";
		cin >> a[i];
	}
}
int BinarySearch(int a[], int x,int left, int right){
	int mid;
	while(left <= right){
		mid = (left + right)/2;
		if (a[mid] == x){
			cout<< x<<" tai vi tri " << mid<< endl;
		}
		 if (a[mid] < x){
			left = mid +1;
		}else{
			right = mid-1;
		}	
	}
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
//	for (int i =0;i<n;i++){
	 BinarySearch(a,x,0,n-1);
	
	
}
