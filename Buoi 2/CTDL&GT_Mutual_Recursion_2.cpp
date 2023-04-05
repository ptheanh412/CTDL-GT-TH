#include <iostream>
using namespace std;


long dayX(int);
long dayY(int);


long dayX(int n){
	if (n == 0)
		return 1;
	return dayX(n-1) + dayY(n-1);	
}
long dayY(int n){
	if (n == 0)
		return 0;
	return 3*dayX(n-1) + 2*dayY(n-1);
}

int main(){
	int n;
	cout << "n = ";
	cin >> n;
	long a = dayX(n);
	long b = dayY(n);
	cout<< "X (" << n<<") =" <<a;
	cout<< "Y (" << n<<") ="<<b;

	return 0;
	
}
