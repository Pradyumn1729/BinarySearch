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
int arr[]={1,2,3,4,5};
int n=5;
int x=3;//element to be found is written here 
cout<<"element is fount t the inedx "<<binarySearch(arr,0,n-1,3);

    return 0;
}