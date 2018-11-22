#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int val);


int main()
{
	int temp[7] = {0,1,2,7,13,22,22};
    int val = 11;
	std::vector<int> numbers;
	int result;
	numbers.insert(numbers.begin(),temp,temp+7);

	result = searchInsert(numbers, val);

	cout << numbers.size() << endl;
    cout << result  << endl;
	return 0;
}


int searchInsert(vector<int>& nums, int val) {
    int i=0;
    int size = nums.size();

    if (val > nums[size-1])
        return size-1;
    else
    {
        if (val <= nums[0])
            return 0;
        else
            for (i=0;i<nums.size()-1;i++)
                if ( (val > nums[i]) && (val <= nums[i+1]) )
                {    
                    return i+1;
                    break;
                }
    }
}

