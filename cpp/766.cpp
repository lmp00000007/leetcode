#include<iostream>
#include<vector>
using namespace std;
    bool isToeplitzMatrix(vector<vector<int>>& matrix);
int main()
{
	int temp[3]={0,0,1};
/*	vector<vector<int>> v;> numbers;
	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);
*/
	vector<vector<int>> numbers{{1,2,1},{1,1,2},{1,1,1}};
	int i;
/*	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << " ";*/
	cout << isToeplitzMatrix(numbers) << endl;
	return 0;
}    

    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int col, row;
        if (matrix.size()==1) return true;
        else {
	        for (row=1;row<matrix.size();row++)
	        	for (col=1;col<matrix[row].size();col++)
	        		if (matrix[row][col]!=matrix[row-1][col-1]) return false;  
        } 
        return true;
    }