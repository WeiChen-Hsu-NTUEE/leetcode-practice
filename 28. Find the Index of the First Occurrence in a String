class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int first_occurance_index = -1;
        for (int j = 0; j < haystack.length(); j++) {
            if (needle[i] == haystack[j]) {
                cout << "i = " << i << "; j = " << j << "\n";
                i++;
                if (first_occurance_index == -1) first_occurance_index = j;
                if (i == needle.length()) {
                    break;
                }
            } else {
                i = 0;
                if (first_occurance_index != -1) {
                    j = first_occurance_index;
                    first_occurance_index = -1;
                }
            }
        }
        if (i != needle.length()) {
            first_occurance_index = -1;
        }
        return first_occurance_index;
    }
};
