#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows);

int main()
{
    int numRows=4;

	std::vector<vector<int>> result;
    result = generate(numRows);

    int row,col;
    for (row=0;row<numRows;row++)
        for (col=0;col<numRows;col++)
            cout << result[row][col] << endl;

	return 0;
}


vector<vector<int>> generate(int numRows){
    vector<int> previous,current;
    vector<vector<int>> result;
    int i,j;
    if (numRows==0) return result;
    current.push_back(1);
    result.push_back(current);
    if (numRows==1) return result;
    else
    {
        for (i=1;i<numRows;i++)
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
        return result;        
    }
}
