class Solution {
public:
    int majorityElement(vector<int>& nums) {
  int result =0, count =0;
        for(auto nums:nums){
            if(count==0){
                result=nums;
                
            }
            if(result!=nums){
                count--;
            }
            else
            {
                count++;
            }
        }
        return result;
    }
};