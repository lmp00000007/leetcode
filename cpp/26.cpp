#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums);


int main()
{
	int temp[7] = {0,0,11,11,13,22,22};
	std::vector<int> numbers;
	int result;
	numbers.insert(numbers.begin(),temp,temp+7);

	result = removeDuplicates(numbers);

	cout << result << endl;

	return 0;
}


int removeDuplicates(vector<int>& nums) {
    int i=0;
    int j=0;
    int size = nums.size();
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (nums[i] == nums[j])
            {
                nums.erase(nums.begin()+j);
                size = nums.size();
            }
            else
            {
                j++;
            }
        }
        i++; 
    }
    return size;       
}

