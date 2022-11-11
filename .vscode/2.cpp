#include<iostream>
using namespace std;
int fun(int n){
     if(n==0){
        return 0;
     }
     fun(n-1);
     cout<<n<<"";
}
int main(){
   int n;
   cout<<"enter the value of n";
   cin>>n;
   fun(n);
   return 0;
}