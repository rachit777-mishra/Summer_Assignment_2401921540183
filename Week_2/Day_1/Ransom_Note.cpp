class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int freq1[26]={0};
        int freq2[26]={0};
        int count=0;

        for(char ch:ransomNote)
        {
            freq1[ch-'a']++;
        }
        for(char x:magazine)
        {
            freq2[x-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(freq1[i] > freq2[i])
            {
                return false;
            }
        }
        
        return true;
    }
};
