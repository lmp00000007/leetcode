#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);


int main()
{
	int temp1[6] = {1,2,3,0,0,0};
    int temp2[3] = {2,5,6};
    int m=3,n=3,i;
	std::vector<int> numbers1;
	std::vector<int> numbers2;
	numbers1.insert(numbers1.begin(),temp1,temp1+6);
    numbers2.insert(numbers2.begin(),temp2,temp2+3);
    merge(numbers1, m, numbers2, n);

    /*int temp1[3] = {0,3,0};
    int temp2[1] = {1};
    int m=2,n=1,i;
    std::vector<int> numbers1;
    std::vector<int> numbers2;
    numbers1.insert(numbers1.begin(),temp1,temp1+3);
    numbers2.insert(numbers2.begin(),temp2,temp2+1);
    merge(numbers1, m, numbers2, n);*/

   // numbers1.erase(numbers1.begin()+numbers1.size()-1);
	//for (i=0;i<numbers1.size();i++)
        //cout << numbers1[i] << endl;

	return 0;
}

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,z;
        while (j<n)
        {
            cout << nums1[i] << ' ' << nums2[j] << endl;
            if (nums2[j]<nums1[i])
            {
                nums1.insert(nums1.begin()+i,nums2[j]); 
                nums1.pop_back(); // delete last element
                j++; 
                m++;             
            }
            if (i<m)
                i++;
            else
            {
                nums1.insert(nums1.begin()+i,nums2[j]); 
                nums1.pop_back(); // delete last element
                j++;
                i++;                 
            }
            for (z=0;z<nums1.size();z++)
            {   
                cout << nums1[z];
                if (z==nums1.size()-1)
                    cout << endl;
            }
        }
    }