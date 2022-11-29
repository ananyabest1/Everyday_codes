//reverse the array
#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int low=0 , high= n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]= temp;
        low++;
        high--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
int main(){
     int arr[6]={1,2,3,4,5,6};
    reverse(arr,6);
    printArray(arr,6);
}