#include<bits/stdc++.h>
using namespace std;

int Count1(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == 0) {
            low = mid + 1;
        } else {
            if (mid == 0 || arr[mid] != arr[mid - 1])
                return (n - mid);
            else
                high = mid - 1; 
        }
    }
    return 0;
}

int main() {
    int arr[] = {0, 0, 1, 1, 1};
    int n = 5;
    int x = 3; // Element to be found is written here
    cout << "count of 1's is " << Count1(arr, n) << endl;

    return 0;
}
