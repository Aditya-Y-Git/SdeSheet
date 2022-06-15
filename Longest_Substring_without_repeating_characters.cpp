#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    unordered_map<char,int> mp;
    int i=0,j=0;
    int ans = 0;
    while(j<input.size()){
        mp[input[j]]++;
        
        if(mp.size() == (j-i+1)){
            ans = max(ans,(j-i+1));
        }
        if(mp.size()<(j-i+1)){
            while(mp.size()<(j-i+1)){
                mp[input[i]]--;
                
                if(mp[input[i]]==0){
                    mp.erase(input[i]);
                }
                i++;
            }
        }
        j++;
    }
    return ans;
}
