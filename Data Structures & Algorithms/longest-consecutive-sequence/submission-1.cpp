class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count=1;
        int maxCount=1;
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]==nums[i+1]){
                continue;
            }else if(nums[i]==nums[i+1]-1){
                count++;
            }else{
                count=1;
            }
            maxCount=max(count,maxCount);
            
        }
        return maxCount;
        
    }
};
