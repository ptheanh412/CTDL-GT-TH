#include <iostream>
using namespace std;

int tinhGiaiThua(int n){
	if (n == 0 || n ==2 ){
		return 1;
	}else {
		return n * tinhGiaiThua(n-1);
	}
}
int main(){
	int n;
	cout << "Nhap n:";
	cin >> n;
	int kq = tinhGiaiThua(n);
	cout << n <<"!="<< kq << endl;
}
