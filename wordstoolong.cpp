#include <iostream>
using namespace std;

int main(){

	int n;
	
	cin>>n;

	for(int i =0; i<n ; ++i){
		string in ;
		cin>>in;
		
		int l = in.length();

		if(l>10){
			//too long case;
			cout<<in[0]+to_string(l-2)+in[l-1]<<endl;
		}else{
			cout<<in<<endl;
		}
		


	
	}

}
