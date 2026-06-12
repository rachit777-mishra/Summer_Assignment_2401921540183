class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        string result="";
        int write=0;
    

        for(int i=0;i<n;i++)
        {
            int j = i;
            int count=0;
            while(j<n && chars[i] == chars[j])
            { 
                count++;
                j++;
            }
            chars[write++] = chars[i];
            if(count>1)
            {
               result=to_string(count);
               for(char c :result)
               {
                chars[write++]=c;
               }
            }
            i=j-1;
        }
        return write;
    }
};
