#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int> ans;
    sort(arr.begin(),arr.end());
    int j ;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            ans.second = arr[i];
            j = i;
            break;
        }
    }
    if(arr[0]!=1) ans.first = 1;
    else{
        for(int i=0;i<n;i++){
            if(i==j) continue;
            else if(arr[i]!=arr[i+1]-1){
                ans.first=arr[i]+1;
                break;
            }
        }     
    }
    return ans;
}
