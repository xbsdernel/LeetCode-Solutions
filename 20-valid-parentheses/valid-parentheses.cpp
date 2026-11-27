class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;
        unordered_map<char, char> bracets;
        bracets['}'] = '{';
        bracets[']'] = '[';
        bracets[')'] = '(';
        for(int i = 0; i < s.length(); ++i) {
            if (bracets[s[i]]) {
                if (!chars.empty() && chars.top() == bracets[s[i]]) {
                    chars.pop();
                }
                else {
                    return false;
                }
            }
            else {
                chars.push(s[i]);
            }
        }

        if (chars.empty())
            return true;
        else
            return false;
    }
};