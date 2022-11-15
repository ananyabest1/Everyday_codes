#include<iostream>
using namespace std;
int main(){
    int n=13; //define an int variable
    int* numptr; //define an int pointer
    numptr=&n; // assign the address to numptr
    cout<<"the address of the number is: "<<numptr<<endl;
    return 0;
}