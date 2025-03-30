// 97 - 122 is lowercase;
// 65 - 90 is uppercase;

#include <iostream>

using namespace std;

string lower(string text){
	string res ="";
	
	for(char i : text){
		res+= tolower(i);
	}
	return res;
}

string upper(string text){
	string res="";
	
	for(char i :text){
		res+= toupper(i);
	}

	return res;

}

int countLows(string text){
	
	int res = 0;

	for(char i: text){
		//
		if(int(i) >=97 && int(i)<=122){
			res++;
		}
	}
	return res;

}

int main(){
//
//	int ups,lows;
//	
	string in;
	cin>>in;
	int lows = countLows(in);
	int highs = in.length()-lows;


	if(lows>=highs){
		in = lower(in);
	}else{
		in = upper(in);
	}

	cout<<in<<endl;

	
	return 0;
}















