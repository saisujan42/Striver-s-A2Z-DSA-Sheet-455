public class Solution {
    public static int dataTypes(String type) 
    {
        if(type.equals("Integer"))
            return 4;
        if(type.equals("Long"))
            return 8;
        if(type.equals("Float"))
            return 4;
        if(type.equals("Double"))
            return 8;
        if(type.equals("Character"))
            return 1;
        return -1;
    }
}