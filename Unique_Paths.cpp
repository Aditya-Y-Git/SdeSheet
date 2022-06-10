<--- Recursive Solution --->

#include <bits/stdc++.h> 

int paths(int i, int j, int m, int n){
    if(i==(m-1) && j==(n-1)) return 1;
    if(i>=m || j>=n) return 0;
    return paths(i+1,j,m,n)+paths(i,j+1,m,n);
}

int uniquePaths(int m, int n) {
	// Write your code here.
    return paths(0,0,m,n);
}


<--- Combinations Solution --->

#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
    int N = m+n-2;
    int r = m-1;
    double ans = 1;
    for(int i=1; i<=r; i++){
        ans = ans*(N-r+i)/i;
    }
    return int(ans);
}
