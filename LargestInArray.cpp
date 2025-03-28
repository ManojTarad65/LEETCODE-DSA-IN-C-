#include<iostream>
using namespace std;

int main(){
    int arr[5]={7,4,6,8,11};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=0; i<n; i++ ){
        if(arr[i]>max){
         max=arr[i];
         
          cout<<"assigning val"  <<" "<<arr[i]<<endl;
        }
        // cout<<arr[i];
    }
    cout<<max;

    return 0;
}