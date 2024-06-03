bool Palindrome(int Start, int End, string &s)
{
    if(Start > End)
        return true;
    if(s[Start] != s[End])
        return false;
    return Palindrome(Start + 1, End - 1, s);
}
bool isPalindrome(string& str) 
{
    int n = str.size();
    return Palindrome(0, n - 1, str);
}
