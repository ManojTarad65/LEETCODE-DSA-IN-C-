#include<iostream>
using namespace std;

void BuySellStock(int *price, int n){
     int bestBuy[100000];
     bestBuy[0]=INT_MAX;

    // cout<<bestBuy[0]<<",";  
     for(int i=1; i<n; i++){
        bestBuy[i]=min(bestBuy[i-1], price[i-1]);
        // cout<<bestBuy[i]<<",";      best buy print 7,1,1,1,1

     }
     int maxProfit=0;
     for(int i=0; i<n; i++){
        int currProfit=price[i]-bestBuy[i];
        // compare maxprofit or currprofit 
        maxProfit=max(maxProfit,currProfit );
     }
// O(n+n)=o O(2n)=O(n)  -> time complexity 
cout<<"max profit = "<<maxProfit<<endl;

}

int main(){
    int price[]={7,1,5,3,6,4};
    int n=sizeof(price)/sizeof(int);
    
    BuySellStock(price,n);
    return 0;
}