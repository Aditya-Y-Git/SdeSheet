#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int curr_min = INT_MAX;
    int max_prf = 0;
    for(int i=0; i<prices.size(); i++){
        curr_min = min(curr_min, prices[i]);
        max_prf = max(max_prf, prices[i]-curr_min);
    }
    return max_prf;
}
