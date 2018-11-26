#include<iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums);

int main(){
	int temp[7] = {0,2,2,4,5,6,7};
    int k=8,i;
	std::vector<int> numbers;
	int result;
	numbers.insert(numbers.begin(),temp,temp+7);
	cout << containsDuplicate(numbers) << endl;

/*	for (i=0;i<numbers.size();i++)
		cout << numbers[i];
	cout << endl;*/
	return 0;
}


bool containsDuplicate(vector<int>& nums) {
	bool result=0;
	int i,j;
	for (i=0;i<nums.size()-1;i++)
	{
		for (j=i+1;j<nums.size();j++)
			if (nums[i]==nums[j])
			{
				result = 1;
				break;
			}
		if (result == true) break;
	}
	return result;
}