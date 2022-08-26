//Abhinav kumar
//2010991445
// set-4
// q1
// given an integer array,find the minimum index of a repeating element in linear time and doing just a single travesal of the array
#include <iostream>
#include <unordered_set>
using namespace std;
 
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    unordered_set<int> set;
 
    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        else {
            set.insert(arr[i]);
        }
    }
 
    // for invalid input
    if (minIndex == n) {
        return minIndex;
    }
 
    // return minimum index
    return minIndex;
}
 
int main()
{
    // int arr[] = { 5, 6, 3, 4, 3, 6, 4 };
    // int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n;
    cout<<"Input length of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    // int n = sizeof(arr) / sizeof(arr[0]);
 
    int minIndex = findMinIndex(arr, n);
 
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }
 
    return 0;
}
