class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
        }
        int lsum=sum;
        int rsum=0;
        for(int i=0;i<nums.size();i++){
            lsum=lsum-nums[i];
            if(lsum==rsum){
                return i;
            }
            rsum+=nums[i];
            
        }
        return -1;
    }
};