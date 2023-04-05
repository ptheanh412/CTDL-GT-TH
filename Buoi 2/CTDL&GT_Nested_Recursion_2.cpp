#include <iostream>
using namespace std;
  // https://codehow.net/de-quy-long-nested-recursion-trong-c-c++-91.html
int A(int m, int n){
  if(m == 0) 
    return n + 1;
  else if(n == 0) 
    return A(m - 1, 1);
  else 
    return A(m-1, A(m, n-1));
}
int main() {
  int kq = A(2,1); 
  cout<<"Voi m = 2 và n = 1";
  cout<<"\nKet qua: "<<kq;

}
