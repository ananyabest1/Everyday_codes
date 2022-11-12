// sum of digits using recursion
#include<iostream>
using namespace std;
int getsum(int n){
   if(n==0)
       return 0; 
   else
     return getsum(n/10 )+ n%10;

}
int main(){
   int n;
   cout<<"enter the value of n";
   cin>>n;
   getsum(n);
}