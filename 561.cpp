#include<iostream>
#include<vector>
using namespace std;

    int arrayPairSum(vector<int>& nums);

int main()
{
	int temp[4]={0,0,1,5};
	vector<int> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	int i;
	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";
	cout << arrayPairSum(numbers) << endl;
	return 0;
}    

    int arrayPairSum(vector<int>& nums) {
    	int i,j,ans=0,positive=-1;
    	int temp;
    	for (i=0;i<nums.size()-1;i++)
    	{
    		positive = -positive;
    		for (j=i+1;j<nums.size();j++)
    		{	
    			if (nums[i]>nums[j])
    			{
    				temp = nums[i];
    				nums[i] = nums[j];
    				nums[j] = temp;
    			}
    			if (positive==1) ans = ans + nums[i];
    		}
    	}
    	return ans;
	}