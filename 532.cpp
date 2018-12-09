#include<iostream>
#include<vector>
using namespace std;

    int findPairs(vector<int>& nums, int k);

int main()
{
	int temp[5]={0,1,2,3,5};
	int k = 1;
	vector<int> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	int i;
	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";
	cout << endl;
	cout << findPairs(numbers,k) << endl;
	return 0;
}    


    int findPairs(vector<int>& nums, int k) {
        int i=0,j,cnt=0;
		
		while(i++<nums.size()-2)
		{	
			j=i+1;
			while(j<nums.size())
			{
				if (nums[i]==nums[j]+k) cnt++;
				if (nums[i]==nums[j]) nums.erase(nums.begin()+j);
				else j++;
			}
		}
		return cnt;
    }

