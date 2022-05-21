class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        vector<int> max(n);
        for(int k=n-1;k>=0;k--){
            if(abs(nums[r])>abs(nums[l])) max[k]=nums[r]*nums[r--];
            else 
                max[k]=nums[l]*nums[l++];
            
        }
        return max;
    }
};