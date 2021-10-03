Expected Time Complexity: O(N).
Expected Space Complexity: O(N).
Step 1: Create a temp string and store concatenation of str1 to str1 in temp.
             temp = str1.str1
Step 2: If str2 is a substring of temp then str1 and str2 are
            rotations of each other.
Example:                
                     str1 = "ABACD"
                     str2 = "CDABA"

     temp = str1.str1 = "ABACDABACD"
     Since str2 is a substring of temp, str1 and str2 are
     rotations of each other.
     
CODE:
         bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!=s2.size())
        return false;
        string temp=s1+s1;
        return (temp.find(s2)!=string::npos);
    }
