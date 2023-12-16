class Solution {
public:
    long long Koko(int k,vector<int>&arr){
        long long ans=0;
        for(int i=0;i<arr.size();i++)
            ans+=ceil( (double)arr[i]/(double) k);
        return ans; 
    }
    int ValueK(int n,vector<int>&arr,int h){
        int low=1,high=arr[n-1];
        while(low<=high){
            int mid=(low+high)/2;
            if(Koko(mid,arr)<=h)
                high=mid-1;
            else
                low=mid+1;    
        }
        return low;
    }

        int minEatingSpeed(vector<int>& arr, int h) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        return ValueK(n,arr,h);
    }

    
    
};