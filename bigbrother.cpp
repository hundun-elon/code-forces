#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int years = 0;

	for(int i=0; i<100000000; ++i){
		a*=3;
		b*=2;
		years++;
		if(a>b){ break;}
	}
	cout<<years<<endl;
}
