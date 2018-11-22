#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums);


int main()
{
	int temp[7] = {-1,0,-2};
    int val = 11;
	std::vector<int> numbers;
	int result;
	numbers.insert(numbers.begin(),temp,temp+3);
	result = maxSubArray(numbers);
	cout << result << endl;
    //cout << numbers.size() << endl;
	return 0;
}



int maxSubArray(vector<int>& nums) {
    int i,j;
    int sum=nums[0],sum_temp;
    if (nums.size() == 1)
        return nums[0];
    else
    {
        for (i=0;i<nums.size();i++)
        {
            sum_temp = nums[i];
            if (sum_temp > sum)
                sum = sum_temp;            
            if (i<nums.size()-1)
                for (j=i+1;j<nums.size();j++)
                {
                    sum_temp = sum_temp + nums[j];
                    if (sum_temp > sum)
                        sum = sum_temp;
                }
        }
        return sum;        
    }
}