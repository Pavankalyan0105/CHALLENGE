#include <bits/stdc++.h> 
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0 ,temp = 0;
    for(int i=0;i<n;i++){
        temp+=arr[i];
        if(temp < 0) temp = 0;
        sum = max(sum , temp);
    }
    return sum;
}
