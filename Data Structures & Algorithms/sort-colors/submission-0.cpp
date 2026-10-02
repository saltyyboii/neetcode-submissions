class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mx= *max_element(nums.begin(),nums.end());
        vector<int>count(mx+1,0);
        for(int x:nums){
            count[x]++;
        }
        int index=0;
        for(int i=0;i<=mx;i++){
            while(count[i]>0){
                nums[index]=i;
                index++;
                count[i]--;
            }
        }

        
    }
};