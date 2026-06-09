class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int s_len = s.length();
        int p_len = p.length();
        
        
        if (s_len < p_len) return ans;
        
        
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        
        
        for (int i = 0; i < p_len; i++) {
            freq1[p[i] - 'a']++;
            freq2[s[i] - 'a']++;
        }
        
    
        if (freq1 == freq2) {
            ans.push_back(0);
        }
        
        
        int left = 1; 
        int right = p_len; 
        
        
        while (right < s_len) {
            
            freq2[s[right] - 'a']++;
            
            
            freq2[s[left - 1] - 'a']--;
            
            
            if (freq1 == freq2) {
                ans.push_back(left);
            }
            
            
            left++;
            right++;
        }
        
        return ans;
        
    }
};
