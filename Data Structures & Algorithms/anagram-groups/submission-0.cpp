class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>ans(26);
        for(int i=0;i<n;i++){
            string s=strs[i]
            sort(s.begin(),s.end())
            for(int j=0;j<n;j++){
                string temp=ans[j][0];
                sort(temp.begin(),temp.end());
                if(s==temp){
                    ans[j].push_back(strs[i]);
                    break;
                }
            }

            
        }

        
        
    }
};
