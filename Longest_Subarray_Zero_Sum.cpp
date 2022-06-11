#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    unordered_map<int,int> m;
    int ans = 0;
    int sum = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == 0){
            ans = i+1;
        }
        else{
            if(m.find(sum) != m.end()){
                ans = max(ans , i-m[sum]);
            }
            else{
                m[sum] = i;
            }
        }
    }
    return ans;
}
