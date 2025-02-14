// Given an array arr of size N, determine whether this array represents an inorder traversal of a BST. 


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        for(int i=0;i<N;i++){
            if(arr[i]<arr[i-1]){
                return 0;                         
            }
        }
        return 1;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        cout<<ob.isRepresentingBST(arr,N)<<endl;
    }
    return 0;
}
