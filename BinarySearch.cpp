#include <iostream>
using namespace std;

int BinSearch(int *arr,int n , int key){

    int st=0, end=n-1;
   
    while(st<=end){

        int mid=(st+end)/2;
        // found at mid 
        if(arr[mid]==key){
            return mid;//key is found 
        }

        //second half 
        else if(arr[mid]<key){
            st=mid+1;

        }
        //first half ¸
        else {
            end=mid-1;
        }
    }

    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,12,14};
    int n=sizeof(arr)/sizeof(n);

   cout<< "found index at "<<BinSearch(arr,n,10)<<endl;
    return 0;
}