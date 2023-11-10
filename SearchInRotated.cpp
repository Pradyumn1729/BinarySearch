// here we r basically seraching the element in the sortded rotated array 

#include<bits/stdc++.h>
using namespace std;

int SearchRotated(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[low]<=arr[mid ]){
            if(arr[low]<=x && x<arr[mid])
                high = mid-1;
            
            else
                low=mid+1;
            
        }
        else{
            if(arr[mid]<x && x<=arr[high])
                low = mid+1;
            
            else
                high=mid-1;
            
        }
    }
    return -1;
}

int main(){
int arr[]={10,20, 40, 60, 5, 8};
int n= 6;
int x=5;//element to be found is written here 
cout<<"the element position is: "<<" "<<SearchRotated(arr,n,x);

    return 0;
}