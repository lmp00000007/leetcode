#include<iostream>
#include<vector>
using namespace std;

    int arrayPairSum(vector<int>& nums);

int main()
{
	int temp[4]={0,3,9,5};
	vector<int> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	int i;
	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";
		cout << endl;
	cout << arrayPairSum(numbers) << endl;
	return 0;
}    

    int arrayPairSum(vector<int>& nums) {
    	int i,j,ans=0;
    	int temp,sign=-1;
    	for (i=0;i<nums.size()-1;i++)
    	{
			sign = -sign;
    		for (j=i+1;j<nums.size();j++)
    			if (nums[i]>nums[j])
    			{
    				temp = nums[i];
    				nums[i] = nums[j];
    				nums[j] = temp;
    			}
			if (sign==1) ans += nums[i];
							cout << ans << endl;
    	}
    	return ans;
	}