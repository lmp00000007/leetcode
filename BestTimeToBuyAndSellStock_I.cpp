#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices);

int main()
{
	int temp[5]={9,8,6,4,2};
	vector<int> prices;
	int result;

	prices.insert(prices.begin(),temp,temp + sizeof(temp)/4);

	int i;
	for (i=0;i<prices.size();i++)
		cout << prices[i] << endl;
	cout << endl;
	result = maxProfit(prices);

	cout << result << endl;
	return 0;
}    

int maxProfit(vector<int>& prices) {
	int i,j,MaxProfit=0,MaxProfitTemp=0;
	for (i=0;i<prices.size();i++) 
		for (j=i;j<prices.size();j++)
			if (prices[i]<prices[j]) {
				MaxProfitTemp = prices[j]-prices[i];
				if (MaxProfitTemp>MaxProfit) MaxProfit = MaxProfitTemp; 
			}
	return MaxProfit;        
}