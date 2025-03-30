#include <iostream>
#include <cstring>
using namespace std;

int main(){
	

	string one,two;
	cin>>one>>two;

	//one = tolower(one);
	//two = tolower(two);
	int order =0;
	for(int i =0; i<one.length(); ++i){
		 if(int(tolower(one[i]))>int(tolower(two[i]))) {order+=1; break;}
		 else if(int(tolower(one[i])) < int(tolower(two[i]))){ order--;break;}
	}
	
	cout<<order<<endl;
//	cout<<one<<two<<endl;


}
