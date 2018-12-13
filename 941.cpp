#include<iostream>
#include<vector>
using namespace std;
    bool validMountainArray(vector<int>& A);

int main()
{
	int temp[5]={0,4,3,2,1};
	vector<int> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	int i;
	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";
	cout << validMountainArray(numbers) << endl;
	return 0;
}    

    bool validMountainArray(vector<int>& A) {
        int i=0,peak=0;
        if (A.size()<3) return false;
        while ((peak<2) && (++i < A.size()-1)){
        	if (A[i-1]+A[i+1]<=2*A[i]) peak++;
        
        cout <<peak<<endl;}
        if (peak!=1) return false;
        	else return true;
    }