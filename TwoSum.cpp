#include<iostream>
#include<vector>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target);


int main()
{
	int temp[4] = {2,7,11,15};
	int target = 9;
	std::vector<int> numbers;
	std::vector<int> result;
	numbers.insert(numbers.begin(),temp,temp+4);

	result = twoSum(numbers,target);

	cout << result[0] << endl;
	cout << result[1] << endl;
	return 0;
}

vector<int> twoSum(vector<int>& nums, int target) 
{
    int i,j;
    vector<int> result;
    for (i=0;i<nums.size()-1;i++)
    	for (j=i+1;j<nums.size();j++)
    		if (nums[i]+nums[j]==target)
    		{
    			result.push_back(nums[i]);
    			result.push_back(nums[j]);
    			return result;
    		}
}
