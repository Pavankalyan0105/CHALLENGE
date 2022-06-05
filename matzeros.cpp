#include <bits/stdc++.h> 
using namespace std;
void setZeros(vector<vector<int>> &mat)
{
    bool isFirstRowZero = false;
    bool isFirstColZero = false;
    for(auto i:mat[0]) if(i==0) isFirstRowZero = true;
    
    for(int i=0;i<mat.size();i++)    if( mat[i][0] == 0 ) isFirstColZero = true; 
    
    
    for(int i=1;i<mat.size();i++){
        for(int j=1;j<mat[0].size();j++){
            if( mat[i][j] == 0 ){
                mat[0][j] = 0;
                mat[i][0] = 0;
            }
        }
    }
    
    for(int i=1;i<mat.size();i++){
        for(int j=1;j<mat[0].size();j++){
            if( mat[i][0] == 0 || mat[0][j] == 0 ) mat[i][j] = 0;
        }
    }
    
    if(isFirstRowZero) for(int i=0;i<mat[0].size();i++) mat[0][i] = 0;
    if(isFirstColZero) for(int j=0;j<mat.size();j++) mat[j][0] = 0;
    
}