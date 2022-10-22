class Solution {
public:
    string minWindow(string s, string t) {
       unordered_map<char, int> m;
	for (auto c : t) m[c]++;
	int start=0,end=0,c=t.size(),minStart=0,minLen=INT_MAX;
			while (end < s.size()) {
		// If char in s exists in t, decrease counter
		if (m[s[end]] > 0)
			c--;
		// Decrease m[s[end]]. If char does not exist in t, m[s[end]] will be negative.
		m[s[end]]--;
		end++;
		// When we found a valid window, move start to find smaller window.
		while (c == 0) {
			if (end - start < minLen) {
				minStart = start;
				minLen = end - start;
			}
			m[s[start]]++;
			// When char exists in t, increase counter.
			if (m[s[start]] > 0)
				c++;
			start++;
		}
	}
	if (minLen != INT_MAX)
		return s.substr(minStart, minLen);
	return "";
                                          
    }
};