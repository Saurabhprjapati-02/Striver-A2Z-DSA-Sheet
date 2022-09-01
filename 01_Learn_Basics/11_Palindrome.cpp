/*
    #Finding Factorial using Recursion

    GfG :: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
    Leetcode 125 :: https://leetcode.com/problems/valid-palindrome/
*/

// Doing Leetcode one

 bool isPalindrome(string s)
{
    string str ="";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalnum(s[i]))  //check if a character is alphanumeric or not
            str.push_back(tolower(s[i]));
    }
    for (int i = 0; i < str.size() / 2; i++) 
    {
        if (str[i] != str[str.size() - 1 - i]) //if str is a palindrome then this condition would always be false
            return false;
    }
    return true;
}