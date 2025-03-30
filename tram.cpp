#include <iostream>

using namespace std;

int max(int a, int b){
	if(a>=b){
		return a;
	}
	return b;
	

}

int main(){
	int n;
	cin>>n;
	int tram=-1;
	int t =0;
	for(int i=0; i<n; ++i){
		int a,b ;
		cin>>a>>b;

		t+= b-a;
		tram = max(tram, t);

	}

	cout<<tram<<endl;
}
