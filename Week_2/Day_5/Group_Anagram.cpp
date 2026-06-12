class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        for (int i = 0; i < strs.size(); i++) {

            string key = strs[i];
            sort(key.begin(), key.end());

            bool placed = false;

            for (int k = 0; k < result.size(); k++) {
                string existingKey = result[k][0];
                sort(existingKey.begin(), existingKey.end());

                if (existingKey == key) {
                    result[k].push_back(strs[i]);
                    placed = true;
                    break;
                }
            }

            if (!placed) {
                result.push_back({strs[i]});
            }
        }

        return result;
    }
};
