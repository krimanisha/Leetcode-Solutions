class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int start = 0, end = 0, count = 0;
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] != s2[i] && count == 0 )
            {
                start = i; count++;
            }
            else if(s1[i] != s2[i] && count == 1 )
            {
                end = i; count++;
            }
            
            if(count == 2)
            {
                swap(s1[start],s1[end]); 
                break;
            } 
        }
        if(s1 == s2)
            return true;
        else
          return false;
        
    }
};