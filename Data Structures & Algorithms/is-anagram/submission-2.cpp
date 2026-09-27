class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<int,int>mp;
        for(char x:s){
            mp[x]++;
        }
        for(char x:t){
            mp[x]--;
        }     
        for(auto c:mp){
            if(c.second!=0){
                return false;
            }
        }
        return true;
    }
};
