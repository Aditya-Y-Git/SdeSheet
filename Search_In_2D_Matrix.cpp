#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    if(mat.size()==0) return false;
    int l = 0;
    int h = (n*m)-1;
    //We will apply the binary search on whole matrix by considering the imaginary indexes
    while(l<=h){
        int mid = l+(h-l)/2;
        if(mat[mid/n][mid%n]==target){
            return true;
        }
        else if(mat[mid/n][mid%n] < target){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return false;
}
