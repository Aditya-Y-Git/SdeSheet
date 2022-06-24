class Solution {
public:
    int trap(vector<int>& height) {
        int low = 0, high = height.size()-1;
        int leftmax = 0, rightmax = 0, ans = 0;
        while(low<=high){
            
            if(height[low]<=height[high]){
                if(height[low]>=leftmax) leftmax = height[low];
                
                else ans+= leftmax-height[low];
                
                low++;
            }
            else{
                if(height[high] >= rightmax) rightmax = height[high];
                
                else ans+= rightmax-height[high];
                
                high--;
            }
        }
        return ans;
    }
};
