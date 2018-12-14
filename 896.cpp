#include<iostream>
#include<vector>
using namespace std;
    bool isMonotonic(vector<int>& A);
int main()
{
	int temp[3]={0,3,1};
	vector<int> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	int i;
	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";
	cout << isMonotonic(numbers) << endl;
	return 0;
}    

    bool isMonotonic(vector<int>& A) {
        int i,sign=0;
        std::vector<int> B;
        if (A.size()<3) return true;
        for (i=0;i<A.size()-1;i++)
        	B.push_back(A[i+1]-A[i]);

        for (i=0;i<B.size();i++) {
        	if ((B[i]!=0)&&(sign==0)) sign=B[i];
        	if (sign*B[i]<0) return false;
        }
        return true;
    }