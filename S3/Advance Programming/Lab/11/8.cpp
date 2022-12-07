class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> record;
        for (int i = 0; i < s.size(); ++i) {
            if (record.find(s.at(i)) != record.end()) {
                ++ record[s.at(i)];
            } else {
                record.insert({s.at(i), 1});
            }
        }

        for (int j = 0; j < t.size(); ++j) {
            if (record.find(t.at(j)) == record.end()) {
                return false;
            } else {
                -- record[t.at(j)];
            }
        }

        for (auto x : record) {
            if (x.second != 0) {
                return false;
            }
        }

        return true;
    }
};