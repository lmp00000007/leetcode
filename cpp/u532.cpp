#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

    int findPairs(vector<int>& nums, int k);

int main()
{
	int temp[5]={5,1,2,3,5};
	int k = 2;
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
        int i=-1,j=-1,cnt=0;
        int Find=0;
		
		while(++i<nums.size())
		{	
			Find=0;
			while(++j<nums.size())
			{
				if ((i==j)||(Find==1)) continue;
				if (nums[i]==nums[j]) {nums.erase(nums.begin()+j);j--;}
				else if ((nums[i]-nums[j]==k)) {cnt++; Find=1;}
			}
		}
		return cnt;
    }

