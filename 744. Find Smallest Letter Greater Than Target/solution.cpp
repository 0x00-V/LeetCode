class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<int> alphabet(26,0);
        for(int i{0}; i < letters.size(); i++)
        {
            alphabet[letters[i] - 'a']++;
        }
        int i = (target - 'a' + 1) % 26;
        while(alphabet[i] == 0)
        {
            i = (i+1) % 26;
        }
        return 'a'+ i;
    }
};