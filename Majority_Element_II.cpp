//Moore voting algorithm

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
               
        int e1=-1;
        int e2=-1;
        int c1=0;
        int c2=0;
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n;i++){
            if(e1==nums[i]) c1++;
            
            else if(e2==nums[i]) c2++;
            
            else if(c1==0){
                e1=nums[i];
                c1=1;
            } 
            
            else if(c2==0) {
                e2=nums[i];
                c2=1;
            }
            
            else{
                c1--;
                c2--;
            }
        }
        int co1=0,co2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==e1) co1++;
            else if(nums[i]==e2) co2++;
        }
        if(co1>(n/3)){
            ans.push_back(e1);
        }
        if(co2>(n/3)){
            ans.push_back(e2);
        }
        return ans;
    }
};
