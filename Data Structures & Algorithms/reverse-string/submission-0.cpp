class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<int>swap;
        for(int i=s.size()-1;i>=0;i--){
            swap.push_back(s[i]);

        }
        for(int i=0;i<s.size();i++){
            s[i]=swap[i];
        }
        
        
    }
};