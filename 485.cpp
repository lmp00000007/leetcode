#include<iostream>
#include<vector>
using namespace std;

    int findMaxConsecutiveOnes(vector<int>& nums);

int main()
{
	int temp[6]={0,0,1,1,1,1};
	vector<int> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	int i;
	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";
	cout << endl;
	cout << findMaxConsecutiveOnes(numbers) << endl;
	return 0;
}    

int findMaxConsecutiveOnes(vector<int>& nums) {
	int i,MaxOnes=0,temp=0;
	
	for(i = 0; i < nums.size(); i++)
	{
		if (nums[i]==1) temp++;
		if (MaxOnes<temp) MaxOnes=temp;
		if (nums[i]==0) temp = 0;
	}
	return MaxOnes;
}