#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    
    for(int i = 0 ; i <= n - 2 ; i++){
        int mini = i;
        for(int j = i ; j <= n - 1 ; j++){
            if(arr[j] <= arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini] , arr[i]);
    }
}
