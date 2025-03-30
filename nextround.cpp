#include <iostream>
#include <vector>

using namespace std;

int main(){

	int n,k;
	cin>>n>>k;
	int nexts = 0;
//
//
	vector<int> scores;
	for(int i=0; i<n;++i){
		int p ;
		cin>>p;
		//im taking in this number;
		scores.push_back(p);
	//
	}
	int thresh = scores[k-1];
	

	for(int  i : scores){ 
		if(i>=thresh && i>0) nexts++;

	}



	cout<<nexts<<endl;

	return 0;

}
