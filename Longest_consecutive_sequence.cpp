<--- My original solution which gave TLE --->

#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int j=0;
    int x = arr[0];
    int count = 0,ans=0;
    while(j<n){
        if(m.find(x)!=m.end()){
            count++;
            x += 1;
        }
        else{
            j++;
            x=arr[j];
            ans = max(ans,count);
            count = 0;
            
        }
    }
    return ans;
}


<--- Optimized Code --->

#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int> s;
      int mx = 0;
      int N = arr.size();
        
      //Store all the elements in the set
      for(int i = 0 ; i < N ; i++){
          s.insert(arr[i]);
      }
      
      
      for(int i = 0; i < N ; i++){
          
          //Check if the current element is starting element of subsequence or not
          if(s.find(arr[i] - 1) == s.end()){
              int j = arr[i];
              
              //while the current element is present in set , increment the current element by one 
              while(s.find(j) != s.end()){
                  j++;
              }
              
              mx = max( mx , j-arr[i]);
          }
      }
      return mx;
}
