#include <bits/stdc++.h> 
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> res;
    res.push_back({1});
    
    for(int row=1;row<n;row++){
        
        vector<long long int> temp(row+1 , 0);
        temp[0] = temp[row] = 1;
        
        for(int col = 1; col < row; col++ )
            temp[col] = res[row-1][col-1] + res[row-1][col];
        res.push_back(temp);
    }
    return res;
    
}
