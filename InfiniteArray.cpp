#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
 
        // Find index of middle element
        int mid = (low + high) / 2;
 
        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;
 
        // If x greater, ignore left half
        if (arr[mid] <= x)
            low = mid + 1;
 
        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}


int main(){
int arr[]={1,2,3,4,5,6};//since we cannot make a infinite array so consider this array only as infinite array 

while(true){
if(arr[i]==x) return i;

if(arr[i]<x)  i=i*2;

return binarySearch(arr,i/2+1,i-1,x);
}

    return 0;
}


