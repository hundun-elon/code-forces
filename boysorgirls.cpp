#include <iostream>
#include <set>
using namespace std;

int main(){
	string username;
	set<char> user;
	cin>>username;

	for( char i : username){
		user.insert(i);
	}

	//now check the length of this set


	if(user.size() %2 ==0) cout<<"CHAT WITH HER!"<<endl;
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
	return 0;


}
