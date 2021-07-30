class Solution {
public:
    bool isPalindrome(int x) {
        int sign = (x >= 0) ? 1 : -1;
        if (sign == -1) {
          return false;
        }
        string str_x = to_string(x);
        string str_reverse_x;
        for (int i = str_x.size() - 1; i >= 0; i--) {
          str_reverse_x += str_x[i];
        }
        if (str_reverse_x != str_x) {
          return false;
        }
        else {
          return true;
        }
    }
};
