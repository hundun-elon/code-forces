#include <iostream>

using namespace std;


int main(){
	
	int numOfLines;
	int total =0;
	cin>>numOfLines;
	for(int i =0 ; i<numOfLines ; ++i){
		int p, v, t ;
		cin>>p;
		cin>>v;
		cin>>t;
		int to = 0;
		
		to+=p;
		to+=v;
		to+=t;
		if(to>=2) total+=1;
	

	}

	cout<<total<<endl;
	return 0;



}
