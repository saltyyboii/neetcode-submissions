class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct=0;
        int can=0;
        for(int num:nums){
            if(ct==0){
                can=num;
            }
            if(num==can){
                ct++;
            }else{
                ct--;
            }
        }
        return can;
        
    }
};