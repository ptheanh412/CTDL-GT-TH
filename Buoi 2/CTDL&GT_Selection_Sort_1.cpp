#include <iostream>
using namespace std;
// https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chen-truc-tiep-insertion-sort
void nhapMang(int a[], int n){
	for (int i = 0; i< n;i++){
		cout << "a[" << i<<"] = ";
		cin >> a[i];
	}
}
void Selection_Sort(int a[], int n){
	int min;//v? trí ph?n t? nh? nh?t trong dãy hi?n hành
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;//ghi nh?n v? trí ph?n t? nh? nh?t
			}
		}
		swap(a[min], a[i]);
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
	Selection_Sort(a,n);
	cout << "Mang sau khi sap xep:" << endl;
	for (int i=0;i<n;i++){
		cout <<" "<< a[i];
	}
	
}

