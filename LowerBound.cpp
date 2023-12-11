// lower bound code
#include<bits/stdc++.h>
using namespace std;

int LowerBound(vector<int>&arr, int n,int x){
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(x<=arr[mid]){
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

    vector<int> arr={1 ,2 ,3,3,5,8,8,10,10,11};
    cout<<"lower bound is "<<LowerBound(arr,10,5)<<endl;
    //another shortct method to check lower bound easily ...
    cout<<lower_bound(arr.begin(),arr.end(),5)-arr.begin();

    return 0;
}