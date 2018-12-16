#include<iostream>
#include<vector>
using namespace std;


int majorityElement(vector<int>& nums);


int main()
{
	int temp[3] = {6,5,5};
	std::vector<int> numbers;
	int result;
	numbers.insert(numbers.begin(),temp,temp+3);

	result = majorityElement(numbers);
//    cout << numbers.size()/2 << endl;
	cout << result << endl;
//	cout << result[1] << endl;
	return 0;
}


int majorityElement(vector<int>& nums) {
    int i,j,cnt,result,DoNotSearch;
    vector<int> checked;
    for (i=0;i<nums.size();i++)
    {   
        DoNotSearch = 0;
        if (checked.size()!=0)
        {    
            for (j=0;j<checked.size();j++)
                if (checked[j]==nums[i])
                    DoNotSearch = 1;
        }
        if ((checked.size()==0) || (DoNotSearch==0))
        {
            cnt = 0;
            checked.push_back(nums[i]);
            for (j=0;j<nums.size();j++)
            {
                if (nums[i]==nums[j]) cnt++;
                if (cnt>=nums.size()/2+1) 
                {
                    result = nums[i];                   
                }
            }                
        }
    }
    return result;
}