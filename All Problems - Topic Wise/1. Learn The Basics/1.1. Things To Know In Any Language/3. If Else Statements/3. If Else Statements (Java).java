public class Solution {
    public static String compareIfElse(int a, int b) 
    {
        if(a > b)
            return "greater";
        if(a < b)
            return "smaller";
        return "equal";
    }
}