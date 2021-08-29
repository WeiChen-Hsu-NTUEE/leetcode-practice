class Solution {
  public:
  int max(int a, int b) { return (a > b) ? a : b; }
  int max(int a, int b, int c) { return max(max(a, b), c); }
  int FindMaxCrossingSubarray(vector<int> &nums, int low,
                              int mid, int high) {
    // find the max subarray from left to mid
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = mid; i >= low; i--) {
      sum += nums[i];
      if (sum > left_sum) {
        left_sum = sum;
      }
    }
    // find the max subarray from mid to right
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = mid + 1; i <= high; i++) {
      sum += nums[i];
      if (sum > right_sum) {
        right_sum = sum;
      }
    }
    cout << "left_sum = " << left_sum << "\n";
    cout << "right_sum = " << right_sum << "\n";
    return max(left_sum + right_sum, left_sum, right_sum);
  }
  int FindMaxSubarray(vector<int> &nums, int low, int high) {
    if (low == high) {
      return nums[low];
    } else {
      int mid = (low + high) / 2;
      return max(FindMaxSubarray(nums, low, mid),
               FindMaxSubarray(nums, mid + 1, high),
               FindMaxCrossingSubarray(nums, low, mid, high));
    }
  }
  int maxSubArray(vector<int> &nums) {
    int low = 0;
    int high = nums.size() - 1;
    return FindMaxSubarray(nums, low, high);
  }
};
