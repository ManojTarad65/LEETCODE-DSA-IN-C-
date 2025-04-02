#include<iostream>
using namespace std;

// with using space 

// void PrintArr(int *arr,int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[]={5,4,3,8,10,2};
//     int n=sizeof(arr)/sizeof(int);

//     int copyArr[n];
//     for(int i=0; i<n; i++){
//         int j = n-i-1;
//             copyArr[i]=arr[j];
//     }
//     for(int i=0; i<n; i++){
//       arr[i]=copyArr[i];
//     }
    
// PrintArr(arr,n);
//     return 0;
// }




// without using space ( two pointer approach)


void PrintArr(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={5,4,3,8,10,2};
    int n=sizeof(arr)/sizeof(int);

    int st=0, end=n-1;
    while (st<end)
    {

        //swap 
        int temp=arr[st];
         arr[st]=arr[end];
        arr[end]=temp;

        st++;
        end--;
        
    }

PrintArr(arr,n);
    return 0;
}
