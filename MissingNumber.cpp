#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int>& nums);

int main()
{
	int temp[7] = {3,4,0,6,1,5,2};
    int val = 11;
	std::vector<int> numbers;
	int result;
	numbers.insert(numbers.begin(),temp,temp+7);

	result = missingNumber(numbers);

	cout << result << endl;

	return 0;
}

    int missingNumber(vector<int>& nums) {
        int i,j,start,middle,end;
        for (i=0;i<nums.size()-1;i++)
            for (j=i+1;j<nums.size();j++)
                if (nums[i]>nums[j]) swap(nums[i],nums[j]);
/*                    for (i=0;i<nums.size();i++)
                        cout << nums[i] << " ";
                    cout << endl;*/
        start = 0;
        end   = nums.size();


/*        cout << " start: " << start;
        cout << " middle: " << middle;
        cout << " end: " << end; 
        cout << endl;*/

        while (end-start > 1)
        {
            middle = (end-start)/2 + start;
            if (middle==nums[middle]) 
            {
                start = middle;
            }    
            else 
            {
                end = middle;
            }
                cout << " start: " << start;
                cout << " middle: " << middle;
                cout << " end: " << end; 
                cout << endl;
        }
        cout << endl;
        if (nums[middle]==middle-1)
        {
            if (nums[middle] > middle)
                return middle;
            else 
                return nums[middle];
        }
        else
            return middle;

    }