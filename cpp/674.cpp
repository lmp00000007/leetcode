#include<iostream>
#include<vector>
using namespace std;


    int findLengthOfLCIS(vector<int>& nums);

int main()
{
	int temp[3]={2,4,7};
	vector<int> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	int i;
/*	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";*/
	cout << findLengthOfLCIS(numbers) << endl;
	return 0;
}    

    int findLengthOfLCIS(vector<int>& nums) {
        int i=0,MaxCnt=1,temp=1;
        if (nums.size()==0) return 0;
        while (++i<nums.size()) {
        	if (nums[i]>nums[i-1])
        		temp++;
        	else 
        	{	
        		if (temp>MaxCnt) MaxCnt = temp;
				temp = 1;
        	}
        }
        if (temp>MaxCnt) MaxCnt = temp;
        return MaxCnt;
    }