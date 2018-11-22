#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);


int main()
{
	int temp1[7] = {0,1,2,7,0,0,0};
    int temp2[3] = {3,6,8}
    int m=4,n=3,i;
	std::vector<int> numbers1;
	std::vector<int> numbers2;
	numbers1.insert(numbers1.begin(),temp1,temp1+7);
    numbers2.insert(numbers2.begin(),temp2,temp2+3);

    merge(numbers1, m, numbers2, n);

	for (i=0;i<numbers1.size();i++)
        cout << numbers1[i] << endl;
	return 0;
}

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i+j+2<m+n)
            if nums1[i]


    }