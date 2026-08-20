class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		std::unordered_set<int> set;

		for(const auto& x: nums)
		{
				if(set.contains(x))
						return true;

				set.insert(x);
		}

		return false;
    }
};
