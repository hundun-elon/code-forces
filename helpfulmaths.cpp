#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool comp(int a, int b){
	return a <b;
}
int main(){
	string x ;
	cin>>x;
	if (x.length()==1){
		cout<<x<<endl;
		return 1;
	}
	vector<int> nums;

	for(int i=0; i<x.length(); i+=2){
		nums.push_back((x[i])-'0');
//		cout<<nums[i]<<endl;
	}
	sort(nums.begin(), nums.end());
//	for(auto i : nums){cout<<i<<endl;}
	string res ="";
	for(int i=0;i < nums.size(); ++i){
		if(i<nums.size()-1)
			res+=to_string(nums[i])+'+';
	}
	res+= to_string(nums[nums.size()-1]);
	cout<<res<<endl;
	return 0;
	

	


}
