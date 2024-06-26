#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents overflow
        if (arr[mid] < target) {
            left = mid + 1;
        } else if (arr[mid] == target) {
            return mid;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter target element: ";
    cin >> n;
    int arr[] = {1, 3, 5, 7, 10};
    int result = binarySearch(arr, 5, n);
    if (result == -1) {
        cout << "Element not found";
    } else {
        cout << "Element found at index " << result;
    }
    return 0;
}
