#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int,int> freq;
    int count = 0 ;
    int xorr = 0;
    for(auto it : arr){
        xorr = xorr ^ it;
        if(xorr == x) count++;
        
        if(freq.find(xorr^x) != freq.end()){
            count += freq[xorr^x];
        }
        
        freq[xorr]++;
    }
    return count;
}
