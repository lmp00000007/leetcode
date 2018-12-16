#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums);

int main()
{
	int temp[3]={0,0,1};
	vector<int> numbers;
	int result;

	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	moveZeroes(numbers);

	int i;
	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";
	cout << endl;
	return 0;
}    


void moveZeroes(vector<int>& nums) {
	int i=0,size;
	size=nums.size();
	while(i<size)
	{
		if (nums[i]==0)
		{
			nums.erase(nums.begin()+i);
			nums.push_back(0);
			size--;
		}
		else
			i++;
	}
}