#include<iostream>
#include<vector>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target);


int main()
{
	int temp[4] = {2,7,11,15};
	int target = 13;
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
    int i=0,j=nums.size()-1;
    vector<int> result;
    while (i<j)
    {
        if (nums[i]+nums[j]<target) i++;
        if (nums[i]+nums[j]>target) j--; 
        if (nums[i]+nums[j]==target) break;        
    }
    result.push_back(i+1);
    result.push_back(j+1);
    return result;
}
