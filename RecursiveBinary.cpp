//recursive binary will take an extra auxillary space of big O of logn i.e,(O(Logn));
// whereras the non recusive approach doesnot take any of extra auxillary space 
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x){

    if(low>high)    return -1;

    int mid=(low+high)/2;
    
    if (arr[mid] == x)
            return mid;
            
    if(arr[mid]>x)
        return binarySearch(arr,low,mid-1,x);

    else    
        return binarySearch(arr,mid+1,high,x);        
}

int main(){

int arr[]={1,2,3,4,5};
int n=5;
int x=3;//element to be found is written here 
cout<<"element is fount t the inedx "<<binarySearch(arr,0,n-1,3);

    return 0;
}
