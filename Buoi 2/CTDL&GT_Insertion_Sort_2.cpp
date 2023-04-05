#include <iostream>
using namespace std;
// https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chen-truc-tiep-insertion-sort
void nhapMang(int a[], int n){
	for (int i = 0; i< n;i++){
		cout << "a[" << i<<"] = ";
		cin >> a[i];
	}
}
void Insertion_Sort(int a[], int n){
	int pos, i;
	int x;
	for(i=1; i<n; i++){
		x = a[i]; pos = i-1;
		while((pos>=0)&&(a[pos]>x)){
                
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
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
	Insertion_Sort(a,n);
	cout << "Mang sau khi sap xep:" << endl;
	for (int i=0;i<n;i++){
		cout <<" "<< a[i];
	}
	
}

