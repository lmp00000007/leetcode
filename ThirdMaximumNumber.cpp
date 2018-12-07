#include<iostream>
#include<vector>
using namespace std;

int thirdMax(vector<int>& nums);
        
    

int main()
{
	int temp[]={5,2,4,1,3,6,0};
	vector<int> numbers;
	int result;

	numbers.insert(numbers.begin(),temp,temp + sizeof(temp)/4);

	int i;
	for (i=0;i<numbers.size();i++)
		cout << numbers[i] << endl;
	cout << endl;

	cout << thirdMax(numbers) << endl;
	return 0;
}    

/*int thirdMax(vector<int>& nums) {
	vector<int> v;
	int i;
	for (i=0;i<nums.size();i++)
    	if (v.size()<3)
    	{
    		log = 1;
			for (j=0;j<v.size();j++)
    			if (v[j]==nums[i]) {
    				log = 0;
//    				break;
    			} 
    		if (log==1)
    			v.push_back(nums[i]);
    		if (v.size()==3)
    			for (j=0;j<2;j++)
    				for (k=j+1;k<3;j++)
    					if (v[j]<v[k])
    					{
    						temp = v[j];
    						v[j] = v[k];
    						v[k] = temp;
    					}
    	}
    return 0;
}
*/

int thirdMax(vector<int>& nums) {
	vector<int> v;
    int i=0,j,k,temp,log;
    v.push_back(nums[i]);
    while(++i<nums.size())
    {
/*    	if (v.size()<3)
/*    	{*/
/*    		log = 1;
			for (j=0;j<v.size();j++)
    			if (v[j]==nums[i]) {
    				log = 0;
//    				break;
    			} */
    		if (nums[i]>v[0]) v.insert(v.begin(),nums[i]);
    		else if (nums[i]>v[1] && nums[i]!=v[0]) v.insert(v.begin()+1,nums[i]);
			else if (nums[i]>v[2] && nums[i]!=v[1]) v.insert(v.begin()+2,nums[i]);
/*
   
    	}
    	else if (nums[i]>v[0]) v.insert(v.begin(),nums[i]);
    	else if (nums[i]>v[1] && nums[i]<v[0]) v.insert(v.begin()+1,nums[i]);
    	else if (nums[i]>v[2] && nums[i]<v[1]) v.insert(v.begin()+2,nums[i]);*/
    }
    if (v.size()<3)
    	return v[0];
    else
    	return v[2];
}