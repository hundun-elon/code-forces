#include <iostream>

using namespace std;

int main(){

	int n ;

	// this is c++ code for doing bits arithmetic;
	cin>>n;
	int x =0;
	for(int i =0; i<n; ++i){
		string operation;
		cin>>operation;
		
		if(operation[0] =='+' || operation[operation.length()-1]=='+') x++;
		else{x--;}



	}
	cout<<x<<endl;




	return 0;
}
