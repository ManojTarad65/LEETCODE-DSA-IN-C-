#include<iostream>
using namespace std;

int main (){
    int arr[]={5,4,3,8,2};
    int n=sizeof(arr)/sizeof(int);
    int min=arr[0];

    for(int i=0; i<n; i++ ){
        if(arr[i]<min){
            min=arr[i];
            cout<<"assigning val "<<arr[i]<<endl;
        }
    }
cout<<min;

    return 0;
}