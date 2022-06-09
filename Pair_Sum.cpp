#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    int n = arr.size();
  
    unordered_map<int, int> m;
 
    // Traverse through all elements
    for (int i = 0; i < n; i++) {
 
        // Search if a pair can be formed with
        // arr[i].
        int rem = s - arr[i];
        if (m.find(rem) != m.end()) {
            int count = m[rem];
            for (int j = 0; j < count; j++)
            {
                vector<int> temp;
                temp.push_back(rem);
                temp.push_back(arr[i]);
                ans.push_back(temp);
            }
        }
        m[arr[i]]++;
    }
    sort(ans.begin(),ans.end());
    return ans;
}
