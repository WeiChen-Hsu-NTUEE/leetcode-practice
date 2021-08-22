class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int index1 = 0;
		int index2 = 0;
        int suspect = 0;
        vector<int> ans;
        if (nums.size() == 2) {
            ans.push_back(0);
            ans.push_back(1);
            return ans;
        }
		for (index1 = 0; index1 < nums.size() - 2; index1++) {
			suspect = target - nums[index1];
			for (index2 = index1 + 1; index2 < nums.size() - 1; index2++) {
				if (nums[index2] == suspect) {
					break;
				}
			}
			if (nums[index2] == suspect) {
				break;
			}
		}
		
		ans.push_back(index1);
		ans.push_back(index2);
		return ans;
	}
};
