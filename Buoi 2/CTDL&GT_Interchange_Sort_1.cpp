#include <iostream>
using namespace std;
// https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-tuyen-tinh-linear-search
void nhapMang(int a[], int n){
	for (int i = 0; i< n;i++){
		cout << "a[" << i<<"] = ";
		cin >> a[i];
	}
}
int Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
			
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
	Interchange_Sort(a,n);
	cout << "Mang sau khi sap xep:" << endl;
	for (int i=0;i<n;i++){
		cout <<" "<< a[i];
	}
	
}
