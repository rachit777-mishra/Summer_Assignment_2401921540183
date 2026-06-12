class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<pair<string, string>> arr;

        
        for (string s : strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            arr.push_back({sorted_s, s});
        }

        sort(arr.begin(), arr.end());

        vector<string> group;
        group.push_back(arr[0].second);

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i].first == arr[i - 1].first) {
                group.push_back(arr[i].second);
            } else {
                result.push_back(group);
                group.clear();
                group.push_back(arr[i].second);
            }
        }

        result.push_back(group);

        return result;
    }
};
    }
};
