#include <bits/stdc++.h>
bool cmp(vector<int> &a,vector<int> &b){
    return a[1] > b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(),jobs.end(),cmp);
    int n = jobs.size();
    int maxJ = jobs[0][0];
    for(int i=0;i<n;i++){
        maxJ = max(maxJ, jobs[i][0]);
    }
    int slot[maxJ+1];
    for(int i=0;i<=maxJ;i++){
        slot[i]=-1;
    }
    int profit=0;
    for(int i=0;i<n;i++){
        for(int j=jobs[i][0];j>0;j--){
            if(slot[j]==-1){
                slot[j] = i;
                profit += jobs[i][1];
                break;
            }
        }
    }
    return profit;
}
