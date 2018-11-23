#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows);

int main()
{
    int numRows=1;

	std::vector<vector<int>> result;
    result = generate(numRows);

/*    int row,col;
    for (row=0;row<numRows;row++)
        for (col=0;col<numRows;col++)
            cout << result[row][col] << endl;
*/
	return 0;
}


vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
/*    std::vector<int> v;
    v.push_back(0);
    result.push_back(v);
    cout << result[0][0] << endl;*/


    int RowIndex,ColIndex;
    for (RowIndex=0;RowIndex<numRows;RowIndex++)
    {    
        if (RowIndex==0)
            result[0][0] = 1;
/*        if (RowIndex>=1)
        {
            result[RowIndex][0] = 1;
            result[RowIndex][1] = 1;
            if (RowIndex>=2)
            {
                for (ColIndex=1;ColIndex<RowIndex;ColIndex++)
                {
                    result[RowIndex][ColIndex] = result[RowIndex-1][ColIndex-1] + result[RowIndex-1][ColIndex];  
                    cout << result[RowIndex][ColIndex] << endl;
                }
            }
        }*/
    }
    return result;
}
