#include <iostream>
using namespace std;
 //https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html
 
int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}
 
int main() {
  int kq,n;
  cout<<"Nhap vi tri muon tim trong day fibonacci: ";
  cin>>n;
  kq = fib(n);
  cout<<"\nSo fibonacci o vi tri "<<n<<" l�: "<<kq;
}
