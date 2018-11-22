#include<iostream>
#include<vector>
using namespace std;

int twoSum(int[] nums, int target) 
	{
	   for (i=0;i<nums.length-1;i++)
		   for (j=i+1;j<nums.length;j++)
				if (nums[i]==(target - nums[j])){
					return new int[] [i,j];
				}
		   
    }

int main()
{
	int nums = [2, 7, 11, 15];
	int target = 9;	
	cout << twoSum(nums,target) << endl;
	return -1;
}


