class Solution {
 public:
  bool isValid(string s) {
    string s_stack = "";
    char top = s[0];
    while (s != "") {
      char s_char = s[0];
      // pop_front()
      if (s.size() == 1) {
        s = "";
      }
      if (s.size() > 1) {
        s = s.substr(1, s.size() - 1);
      }
      //
      s_stack += s_char;
      if (s_char == '{' || s_char == '[' || s_char == '(') {
        top = s_char;
      }
      if (s_char == '}') {
        if (top == '{') {
          s_stack.pop_back();
          s_stack.pop_back();
          if (s_stack.size() != 0) {
            top = s_stack[s_stack.size() - 1];
          } else {
            top = 'X';
          }
        } else {
          return false;
        }
      }
      if (s_char == ']') {
        if (top == '[') {
          s_stack.pop_back();
          s_stack.pop_back();
          if (s_stack.size() != 0) {
            top = s_stack[s_stack.size() - 1];
          } else {
            top = 'X';
          }
        } else {
          return false;
        }
      }
      if (s_char == ')') {
        if (top == '(') {
          s_stack.pop_back();
          s_stack.pop_back();
          if (s_stack.size() != 0) {
            top = s_stack[s_stack.size() - 1];
          } else {
            top = 'X';
          }
        } else {
          return false;
        }
      }
    }
    if (s_stack == "") {
      return true;
    } else {
      return false;
    }
  }
};
