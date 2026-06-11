class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        int left=0;
        int right=0;
        

        for(int i=0;i<n;i++)
        {   
            
            if(s[i] == ' ')
            {
                right=i-1;
            

                 while(left<right)
                {
                    swap(s[left],s[right]);
                    left++;
                    right--;
 
                }
                left=i+1;
            }
            if( i == n-1)
            {
                right=i;

                while(left<right)
                {
                    swap(s[left],s[right]);
                    left++;
                    right--;
                }
            }
        } 
        return s;
        
    }
};
