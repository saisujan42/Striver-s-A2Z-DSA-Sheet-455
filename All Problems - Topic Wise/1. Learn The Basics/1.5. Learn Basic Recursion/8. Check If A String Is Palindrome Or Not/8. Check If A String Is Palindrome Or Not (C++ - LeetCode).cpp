class Solution {
public:
    bool isPalindrome(string s) 
    {
        int n = s.size();
        int Start = 0, End = n - 1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(Start <= End)
        {
            if(!isalnum(s[Start]))
                Start++;
            else if(!isalnum(s[End]))
                End--;
            else if(s[Start] != s[End])
                return false;
            else
                Start++, End--;
        }
        return true;
    }
};