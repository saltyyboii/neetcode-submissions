class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>a;
        int ans=1;
        for(int i=0;i<n;i++){
            ans*=nums[i];
            a[i]=ans;
        }
        return a;

    }
};
