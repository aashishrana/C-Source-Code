#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k) {
    // Base case
    if(s > e) {
        return false;
    }
    int mid = s + (e-s)/2;

    if(arr[mid] == k) {
        return true;
    }

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    if(arr[mid] > k) {
        return binarySearch(arr, s, mid-1, k);
    }
}

int main() {
    int arr[5] = {2 , 4, 6 , 8, 10};

    int size = 5;

    int key = 11;

    cout <<"element found or not" <<" " << binarySearch(arr, 0, 5, key) << endl;

    return 0;
}