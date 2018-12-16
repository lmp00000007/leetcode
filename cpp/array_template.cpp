#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int temp[3]={0,0,1};
	vector<int> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	int i;
	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";
	cout << endl;
	return 0;
}    

