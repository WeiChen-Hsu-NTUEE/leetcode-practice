class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 1) {
      return strs[0];
    }
    int min_str_size = strs[0].size();
    for (int i = 1; i < strs.size(); i++) {
      if (strs[i].size() < min_str_size) {
        min_str_size = strs[i].size();
      }
      if (min_str_size == 0) {
        return "";
      }
    }
    string common_prefix = "";
    int prefix_length = 0;
    for (int j = 0; j < min_str_size; j++) {
      bool uncommon = false;
      for (int i = 1; i < strs.size(); i++) {
        if (strs[0][prefix_length] != strs[i][prefix_length]) {
          uncommon = true;
          break;
        }
        if (i == strs.size() - 1 && strs[0][prefix_length] == strs[i][prefix_length]) {
          common_prefix += strs[0][prefix_length];
          prefix_length++;
        }
      }
      if (uncommon == true) {
        break;
      }
    }
    return common_prefix;
  }
};
