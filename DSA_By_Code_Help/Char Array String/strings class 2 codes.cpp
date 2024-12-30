https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int index = 0;

        while(index < s.length()) {
            //same
            //ans ka rightmost character and string s ka current character
            if(ans.length() > 0 && ans[ans.length()-1] == s[index]) {
                //pop from ans string
                ans.pop_back();
            }
            else {
                //push
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }
};


https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

class Solution {
public:
    string removeOccurrences(string s, string part) {
        

        while(s.find(part) != string::npos) {
            //if inside loop, it means that part exists in s string
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};



https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
    bool checkPalindrome(string s, int i, int j) {
        while( i<= j) {
            if(s[i] != s[j] ) {
                return false;
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while( i <= j) {
            if(s[i] == s[j]) {
                i++;
                j--;
            }
            else{
                //s[i]!=s[j]
                //1 removal allowed
                //check plaindrome for remaining string after removal

                //ith character -> remove
                bool ans1 = checkPalindrome(s, i+1, j);
                //jth character -> remove
                bool ans2 = checkPalindrome(s, i, j-1);

                return ans1 || ans2;
            }
        }
        //agar yha tk pohoche ho
        //iska matlab valid palindrome hai
        //iska matlab -> 0 removal
        return true;
    }
};

https://leetcode.com/problems/palindromic-substrings/

class Solution {
public:
    int expand(string s,int i, int j) {
        int count = 0;

        while(i >= 0 && j < s.length() && s[i] == s[j] ) {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalCount = 0;
        for(int i = 0; i < s.length(); i++ ) {
            //ODD
            int j = i;
            int oddKaAns = expand(s, i, j);  
            //EVEN
            j = i+1;
            int evenKaAns = expand(s, i, j);
            totalCount = totalCount + oddKaAns + evenKaAns;
        }
        return totalCount;
    }
};