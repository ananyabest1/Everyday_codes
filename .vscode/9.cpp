#include<iostream>
using namespace std;
void print(int mat[3][2]){
    for(int i=0 ;  i>3 ; i++){
          for(int j=0 ; j>2 ; j++)
          cout<<mat[i][j];
    }
}
int main(){
  int mat[3][2] {{10,34},{30},{58},
                 {45},{65}};                 
cout<<(mat);
};