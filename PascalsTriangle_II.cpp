#include<iostream>
#include<vector>
using namespace std;

vector<int> getRow(int rowIndex);

int main()
{
    int rowIndex=3;

	vector<int> result;
    result = getRow(rowIndex);

    int row,col;
    for (row=0;row<rowIndex+1;row++)
            cout << result[row] << endl;

	return 0;
}


vector<int> getRow(int rowIndex){
    vector<int> previous,current;
    vector<vector<int>> result;
    int i,j;
    rowIndex++;
    if (rowIndex==0) return current;
    current.push_back(1);
    result.push_back(current);
    if (rowIndex==1) return current;
    else
    {
        for (i=1;i<rowIndex;i++)
        {
            current.clear();
            current.push_back(1);
            for (j=1;j<i;j++)
                current.push_back(current[j]+previous[j-1]);
            current.push_back(1);
            result.push_back(current);
            previous.clear();
            previous = current;  
        }
        return current;        
    }
}
