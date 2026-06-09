class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq1[128]={0};
        int length;
        int ans =0;
        int left=0;

        for(int right=0;right<s.size();right++)
        {
            freq1[s[right]]++;
            while(freq1[s[right]] > 1 )
            {
                freq1[s[left]]--;
                left++;
            }
            length = right - left + 1;
            ans = max(ans,length);

        }
        return ans;
        
    }
};
