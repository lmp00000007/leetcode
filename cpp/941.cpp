#include<iostream>
#include<vector>
using namespace std;
    bool validMountainArray(vector<int>& A);

int main()
{
	int temp[5]={0,1,2,1,2};
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
        std::vector<int> B;
        if (A.size()<3) return false;
        for (i=0;i<A.size()-1;i++){
        	B.push_back(A[i+1]-A[i]);
        	if (A[i+1]-A[i]==0) return false;
        }
        for (i=0;i<B.size()-1;i++){
        	if (B[i+1]*B[i]<0) peak++;
        }        

        
        cout <<peak<<endl;
        if ((peak!=1)||(B[0]<0)) return false;
        else return true;
    }