#include<iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k);

int main(){
	int temp[7] = {0,2,3,4,5,6,7};
    int k=8,i;
	std::vector<int> numbers;
	int result;
	numbers.insert(numbers.begin(),temp,temp+7);

	rotate(numbers,k);

	for (i=0;i<numbers.size();i++)
		cout << numbers[i];
	cout << endl;


	return 0;
}


void rotate(vector<int>& nums, int k) {
	k = k % nums.size();
    nums.insert(nums.begin(),nums.end()-k,nums.end());
    nums.erase(nums.end()-k,nums.end());
}