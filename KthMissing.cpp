// brute force approach would be as follows 
#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int arr[] = {2, 3, 4, 7, 11};
//     int k = 5;
//     int i;

//     for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//         if (arr[i] <= k)
//             k++;
//         else
//             break;
//     }

//     cout << k << endl;
//     return 0;
// }

// optimal approach is as follows 
int KMissing(vector<int>&arr, int k){
    int low=0,high=arr.size();
    while(low<=high){
        int mid=(high-low)/2 +low;
        int missing = arr[mid]-(mid+1);

        if(missing <k)
            low=mid+1;
        else
            high=mid-1;
    }
    return high + 1 +k;
}
int main()
{
    vector<int> vec = {4, 7, 9, 10};
    int n = 4, k = 4;
    int ans = KMissing(vec, k);
    cout << "The missing number is: " << ans << "\n";
    return 0;
}
