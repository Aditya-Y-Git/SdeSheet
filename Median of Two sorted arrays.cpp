double median(vector<int> a, vector<int> b)
{
    // Apply binary search on the smaller size vector
    if(a.size() > b.size()) return median(b,a);
    
    int n1 = a.size();
    int n2 = b.size();
    int l = 0, h = n1;
    
    while(l <= h){
        // partition for first vector
        // 7, 12 | 14, 15
        // 0   1    2   3
        int cut1 = (l+h)/2;  //cut1 = 0+(4-0)/2 = 2;
        
        // partition for second vector = total no of elements in both vectors - partition of 1st vector
        // 1, 2, 3 | 4, 9, 11
        // 0  1  2   3  4  5
        int cut2 = (n1+n2+1)/2 - cut1;  // cut2 = (4+6+1)/2 - 2 = 3
        
        // greatest element in first partition i.e. 12
        double left1 = cut1==0 ? INT_MIN : a[cut1-1];
        // greatest element in second partition i.e. 3
        double left2 = cut2==0 ? INT_MIN : b[cut2-1];
        
        //smallest element in first partition i.e. 14
        double right1 = cut1==n1 ? INT_MAX : a[cut1];
        //smallest element in first partition i.e. 4
        double right2 = cut2==n2 ? INT_MAX : b[cut2];
        
        if(left1 <= right2 && left2 <= right1){
            //If sum of length of two vectors is even then there will be two medians
            if((n1+n2) % 2 == 0){
                return (max(left1,left2)+min(right1,right2))/2.0;
            }
            else{
                return max(left1,left2);
            }
        }
        else if(left1 > right2){
            h = cut1 - 1;
        }
        else{
            l = cut1 + 1;
        }
    }
    return 0.0;
}
