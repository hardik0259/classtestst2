/*St2 set 1 Question 1*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking the first input , the length of array
    int n;
    cin>>n;
    int arr[n];
    // taking the second input , the input of array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sorting the array to make finding the non-repeated number less time consuming
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        // comparing the elements of array to check that they are not repeating
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            // printing the output
            cout<<arr[i]<<",";
        }
    }

    return 0;
}