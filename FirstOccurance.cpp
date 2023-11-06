#include<bits/stdc++.h>
using namespace std;
int FirstOccur(int arr[],int low,int high,int x){

    while(low<=high){
        int mid=(low + high)/2;

        if(arr[mid]<x){
            low=mid+1;
        }

        else if(arr[mid]>x){
            high=mid-1;
        }

        else{
            if(mid==0 ||arr[mid]!=arr[mid-1])
                return mid;
            
            else
                high = mid-1;
        }
    }
}
int main(){

int arr[]={1,2,3,3,5};
int n=5;
int x=3;//element to be found is written here 
cout<<"element is fount at the inedx "<<FirstOccur(arr,0,n-1,3);

    return 0;
}