class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(int i = 0; i < strs.size(); i++) {

            // 26 characters ki frequency
            int count[26] = {0};

            // Current string ke characters count karo
            for(int j = 0; j < strs[i].size(); j++) {
                count[strs[i][j] - 'a']++;
            }

            // Frequency array ko unique key mein convert karo
            string key = "";

            for(int k = 0; k < 26; k++) {
                key += "#" + to_string(count[k]);
            }

            // Same key wale anagrams ek group mein
            mp[key].push_back(strs[i]);
        }

        // Map ke groups ko answer mein daalo
        vector<vector<string>> ans;

        for(auto &p : mp) {
            ans.push_back(p.second);
        }

        return ans;
    }
};
