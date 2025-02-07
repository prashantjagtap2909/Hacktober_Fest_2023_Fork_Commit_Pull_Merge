//  Given an array of length N consisting of only 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on the right side of the array.


#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
       
        int start = 0 , end = n-1;
        
        while(start < end){
            if(arr[start] == 0){
                start++;
            }else{
                if(arr[end] == 0){
                    swap(arr[start] , arr[end]);
                    start++ , end--;
                }else{
                    end--;
                }
            }
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
