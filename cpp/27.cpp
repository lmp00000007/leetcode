#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val);


int main()
{
	int temp[7] = {0,0,11,11,13,22,22};
    int val = 11;
	std::vector<int> numbers;
	int result;
	numbers.insert(numbers.begin(),temp,temp+7);

	result = removeElement(numbers, val);

	cout << result << endl;

	return 0;
}


int removeElement(vector<int>& nums, int val) {
    int i=0;
    int j=0;
    int size = nums.size();
    while (i < size)
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin()+i);
            size = nums.size();
        }
        else
        {
            i++;
        }
 
    }
    return size;       
}

