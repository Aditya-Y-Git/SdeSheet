#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int i=0,j=0;
    while(i<m)
    {
        if(arr1[i]>arr2[j]){
            swap(arr1[i], arr2[j]);
            sort(arr2.begin(), arr2.end());
            
        }
        i++;
    }
    j=m;
    i=0;
    while(j<m+n){
        arr1[j]=arr2[i];
        i++;
        j++;
    }
    return arr1;
}
