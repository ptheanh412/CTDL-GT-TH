#include <iostream>
using namespace std;

// https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-quick-sort

void nhapMang(int a[], int n){
	for (int i = 0; i< n;i++){
		cout << "a[" << i<<"] = ";
		cin >> a[i];
	}
}
void Quick_Sort(int a[], int left, int right){
	int i, j, x;
	x = a[(left+right)/2];
	i = left; j = right;
	do{
		while(a[i] < x) i++;
		while(a[j] > x) j--;
		if(i <= j){
			swap(a[i],a[j]);
			i++; j--;
		}
	}while(i <= j);
	if(left<j){
		Quick_Sort(a, left, j);
	}
	if(i<right){
		Quick_Sort(a, i, right);
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
	Quick_Sort(a,0,n-1);
	cout << "Mang sau khi sap xep:" << endl;
	for (int i=0;i<n;i++){
		cout <<" "<< a[i];
	}
	
}
