#include <bits/stdc++.h>
using namespace std;
struct activity{
    int s;
    int e;
    int pos;
};
bool cmp(struct activity a1, activity a2){
    if(a1.e < a2.e) return true;
    else if(a1.e > a2.e) return false;
    else if(a1.pos < a2.pos) return true;
    else return false;
}

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n = start.size();
    struct activity acv[n]; 
    for(int i=0; i<n; i++){
        acv[i].s = start[i], acv[i].e = finish[i], acv[i].pos = i;
    }
    sort(acv, acv+n, cmp);
    int endtime = acv[0].e;
    int ans = 1;
    for(int i=1;i<n;i++){
        if(acv[i].s >= endtime){
            ans++;
            endtime = acv[i].e;
        }
    }
    return ans;
}
