#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


vector<int> findDisappearedNumbers(vector<int>& nums);


int main()
{
	int temp[8]={4,3,2,7,8,2,3,1};
	vector<int> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	vector<int> v;
	v = findDisappearedNumbers(numbers);

	int i;
	for (i=0;i<v.size();i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}    

vector<int> findDisappearedNumbers(vector<int>& nums){
	int i,Index;
	vector<int> res;
	for (i=0;i<nums.size();i++)
	{
		Index = abs(nums[i])-1;
		nums[Index] = -abs(nums[Index]);
		//cout << nums[Index] << endl;
	}
		for (i=0;i<nums.size();i++)
			if (nums[i]>0) res.push_back(i+1);
	return res;
}

