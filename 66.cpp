#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits);

int main()
{
	int temp[2] = {9,9};
    int val = 11;
    int i;
	std::vector<int> numbers;
	std::vector<int> result;
	numbers.insert(numbers.begin(),temp,temp+2);
    //numbers.insert(numbers.begin(),temp[0]);	
    result = plusOne(numbers);
    for (i=0;i<result.size();i++)
        cout << result[i] << endl;
    
    //cout << numbers.size() << endl;
	return 0;
}

vector<int> plusOne(vector<int>& digits) {
    int i;
    int plusOneFlag = 1;
    vector<int> result;
    if (digits.size() == 1)
    {
        if (digits[0]<9)
        {
            result.push_back(digits[0]+1);
            return result;
        }
        else
        {    
            result.push_back(1);
            result.push_back(0);
            return result;
        }
    }
    else
    {
        for (i=digits.size()-1;i>=0;i--)
        {
            if (digits[i] + plusOneFlag<=9)
            {               
                result.insert(result.begin(), digits[i]+plusOneFlag);
                plusOneFlag = 0;
            }
            else
            {
                plusOneFlag = 1;
                result.insert(result.begin(), 0);               
            }
        }
        if (plusOneFlag==1)
            result.insert(result.begin(),1);
        return result;
    }
}