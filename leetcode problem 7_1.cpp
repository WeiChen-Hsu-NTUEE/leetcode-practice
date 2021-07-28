class Solution {
 public:
  int reverse(int x) {
    if (x == 0) {
      return 0;
    }
    string str_x = to_string(x);
    string str_ans;
    if (str_x[0] == '-') {
      str_ans += '-';
      for (int i = str_x.size() - 1; i >= 1; i--) {
        str_ans += str_x[i];
      }
      while (str_ans[1] == '0') {
        str_ans.erase(1, 1);
      }
    } else {
      for (int i = str_x.size() - 1; i >= 0; i--) {
        str_ans += str_x[i];
      }
      while (str_ans[0] == '0') {
        str_ans.erase(0, 1);
      }
    }
    cout << str_ans;
    long ans = std::stol(str_ans);
    if (ans > 2147483647 || ans < -2147483648) {
      return 0;
    }
    return ans;
  }
};