#include <iostream>


using namespace std;

int main(){
	
	int k,n,w;
	cin>>k>>n>>w;

	int cost =0;
	// 1 2 1
	for(int i=1; i<w+1 ; ++i){
		cost = cost + k * i;

	}

	int borrow = cost - n ;
	
	if(borrow<0){
		cout<<0<<endl;
		return 0;
	}
	cout<<borrow<<endl;

	return 0;


}
