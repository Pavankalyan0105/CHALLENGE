#include <bits/stdc++.h> 
using namespace std;

void sort012(int *arr, int n)
{
   int left = 0 , right = n-1 , mid = 0;
   
   while( mid <= right ){
       
       int num = arr[mid];
       switch(num){
           
           case 0:
               swap(arr[mid++] ,arr[left++]);
               break;
               
           case 1:
               mid++;
               break;
               
           case 2:
               swap(arr[mid] , arr[right--]);
               break;
       }
   }
    
    
}

