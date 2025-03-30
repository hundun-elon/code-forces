#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int res,row,col;

	for(int i =1 ; i< 6 ; ++i){
		for(int j =1 ; j <6 ;++j){

			int entry;
			cin>>entry;
			if (entry==1){
				row = i; col = j;
			}
		}


	}
	int h = abs(col-3);
	int v = abs(row-3);
	
	res= v+h;

	cout<<res;
	return 0;


}
