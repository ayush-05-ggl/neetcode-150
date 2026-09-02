class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> count;

        for (char character : s) {
            count[character]++;
        }
        for (char character : t) {
            count[character]--;

            if (count[character] < 0) {
                return false;
            }
        }
        return true;
    }
};
