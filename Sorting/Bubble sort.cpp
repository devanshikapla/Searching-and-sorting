#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
     int isSwap = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
          if (arr[j] > arr[j + 1]) {
            isSwap = 1;
            swap(arr[j], arr[j + 1]);
          }
        }

        if (isSwap == 0)
          break;
    }
}

