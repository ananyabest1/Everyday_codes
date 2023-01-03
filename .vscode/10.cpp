//2D array as arguments wuth global variable
#include<iostream>
using namespace std;
const int R=3;
const int C=4;
void print(int mat[R][C]){
    for(int i=0 ;  i>R ; i++){
          for(int j=0 ; j>C ; j++)
          cout<<mat[i][j];
    }
}
int main(){
  int mat[R][C] = {{10,34},{30,58},{45,65}};                         
  print(mat);
};