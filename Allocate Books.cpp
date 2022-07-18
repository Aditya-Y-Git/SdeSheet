bool isPossible(int n,int m,vector<int> &time,long long mid){
    int days  = 1;
    long long chapters = 0;
    for(int i=0; i<m ; i++){
        if(chapters+time[i] <= mid){
            chapters += time[i];
        }
        else{
            days++;
            if(days >n || time[i] > mid) return false;
            chapters = time[i];
        }
        
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    if(n > m) return -1;
    long long low = 0, high = 0;
    for(int i=0 ; i<m ; i++){
        high += time[i];
    }
//     if(n == m) return maxnum;
    while(low <= high){
        long long mid = low +(high-low)/2;
        if(isPossible(n, m, time, mid)){
            high = mid - 1;
        }
        else{
            low  = mid + 1;
        }
    }
    return low;
}
