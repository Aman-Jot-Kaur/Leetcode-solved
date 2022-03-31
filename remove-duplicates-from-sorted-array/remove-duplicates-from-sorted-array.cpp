class Solution {
public:
    
        int removeDuplicates(vector<int>& nums) {        
	int numOfDuplicates = 0;

	for(int i = 1; i < nums.size(); ++i)
	{
		if(nums[i-1] == nums[i])
			++numOfDuplicates;
		else
			nums[i - numOfDuplicates] = nums[i];
	}
	return nums.size() - numOfDuplicates;
}
    
};