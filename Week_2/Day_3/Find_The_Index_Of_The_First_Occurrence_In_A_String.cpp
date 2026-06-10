class Solution {
public:
    int strStr(string haystack, string needle) {
        int k=needle.size();
        if(k > haystack.size())
        {
            return -1;
        }
        for(int i=0;i<=haystack.size()-k;i++)
        {
            string s="";
            for(int j=0;j<k;j++)
            {
                s+=haystack[i+j];
            }
            if(s == needle)
            {
                return i;
            }
        }
        return -1;
    }
};
