#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int res = n;
	for(int i=0; i<k;++i){

		if(res%10==0){
			res = res/10;
		}else{
			res=res-1;
		}

	}

	cout<<res<<endl;
	return 0;



}
