#include <bits/stdc++.h>
using namespace std;
struct meeting{
    int s;
    int e;
    int pos;
};

bool static cmp(struct meeting m1, meeting m2){
    if(m1.e < m2.e) return true;
    else if(m1.e > m2.e) return false;
    else if(m1.pos < m2.pos) return true;
    else return false;
}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n = start.size();
    struct meeting meet[n];
    for(int i=0; i<n; i++){
        meet[i].s = start[i], meet[i].e = end[i], meet[i].pos = i+1;
    }
    
    sort(meet,meet+n,cmp);
    
    int free = meet[0].e;
    vector<int> ans;
    ans.push_back(meet[0].pos);
    for(int i=1;i<n;i++){
        if(free<meet[i].s){
            free = meet[i].e;
            ans.push_back(meet[i].pos);
        }
    }
    return ans;
}
