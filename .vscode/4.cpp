#include <iostream>
using namespace std;
int fun(int n) {
   if((n==1)||(n==0)) {
      return(n);
   }else {
      return(fun(n-1)+fun(n-2));
   }
}
int main() {
   int n , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> n;
   cout << "The Fibonnaci Series : ";
   while(i < n) {
      cout << " " << fun(i);
      i++;
   }
   return 0;
}