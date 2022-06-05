//If there is a case in which no majority element is present

#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int ans = -1;
    for(auto it : m){
        if(it.second>(n/2)){
            ans = it.first;
            break;
        }
    }
    return ans;
}

//There is at least one majority element
//Moore voting algorithm

int majorityElement(vector<int>& nums) {
  int count=0;
  int element = 0;
  for(int i=0;i<nums.size();i++){
      if(count==0){
          element=nums[i];
      }
      if(nums[i]==element){
          count+=1;
      }
      else{
          count-=1;
      }
  }
  return element;
}
