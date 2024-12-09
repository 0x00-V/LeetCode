class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> currCount(26, 0);

        for(char m : magazine){ currCount[m - 'a']++;}
        for(char r : ransomNote)
        {
            if(--currCount[r - 'a'] < 0)
            {
                return false;
            }
        }
        return true;
    }
};