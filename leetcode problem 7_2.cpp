class Solution {
 public:
  int reverse(int x) {
    if (x == INT_MIN) {  // INT_MAX = 2741483647; INT_MIN = -2741483648; so INT_MIN * -1 will overflow
      return 0;
    }
    int sign = (x >= 0) ? 1 : -1;
    x *= sign;
    int reverse_num = 0;
    while (x > 0) {
      if (reverse_num > INT_MAX / 10) {  // reverse_num * 10 + (x % 10) > INT_MAX, so overflow
        return 0;
      }
      reverse_num = reverse_num * 10 + (x % 10);
      x /= 10;
    }
    return reverse_num * sign;
  }
};
