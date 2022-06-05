#include <bits/stdc++.h> 
using namespace std;

vector<int> nextPermutation(vector<int> &nums, int n)
{
    int i;
    for( i=n-1;i>0;i--) if( nums[i-1] < nums[i] ) break;
    
    reverse(nums.begin()+i , nums.end());
    
    if( i == 0 ) return nums;
    
    for(int j=i;j<n;j++){
        if( nums[j] > nums[i-1] ){
            swap(nums[j] , nums[i-1]);
            return nums;
        }
    }
    
    return nums;
}