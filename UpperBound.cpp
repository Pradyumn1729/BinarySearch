///upper bound defination --->smallest index such that arr[ind]>x

#include<bits/stdc++.h>
using namespace std;

int UpperBound(vector<int>&arr, int n,int x){
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(x<arr[mid]){
            ans=mid;
            high=mid-1;
        }
        else {
            low=mid+1;
        }
        
    }
    return ans;
}

int main(){

    vector<int> arr={2,3,6,7,8,8,11,11,11,12};
    cout<<"upper bound is "<<UpperBound(arr,10,11)<<endl;
    //another shortct method to check lower bound easily ...
    cout<<upper_bound(arr.begin(),arr.end(),11)-arr.begin();

    return 0;
}