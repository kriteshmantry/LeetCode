class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> counter;

        for (char ch : s)
            counter[ch]++;

        for (char ch : t) {
            if (counter.find(ch) == counter.end() || counter[ch] == 0)
                return false;

            counter[ch]--;
        }

        return true;
    }
};