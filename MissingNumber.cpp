#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int>& nums);

int main()
{
	int temp[3] = {3,0,1};
    int val = 11;
	std::vector<int> numbers;
	int result;
	numbers.insert(numbers.begin(),temp,temp+3);

	result = missingNumber(numbers);

	cout << result << endl;

	return 0;
}

    int missingNumber(vector<int>& nums) {
        int i,j,n;

        while (i<=nums.size())
        {
            for (j=0;j<nums.size();j++)
            {
                if ((j==nums.size()-1) && (nums[j]!=i))
                    return i;                
                if (i==nums[j])
                {
                    for (n=0;n<nums.size();n++)
                        cout << nums[n] << " "; 
                    cout << endl;
                    
                    nums.erase(nums.begin()+j);
                    break;
                }

            }   
        }
    }