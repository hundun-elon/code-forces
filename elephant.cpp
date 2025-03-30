#include <iostream>
#include <vector>

using namespace std;

int solution(int x){

	vector<int> moves ={5,4,3,2,1};
	
	int ms = 0;

	int i=0;

	while(i<moves.size()){
//		x = x - moves[i];
		
		if(x<moves[i]){
			//x = x- moves[i];
			i++;
			
			//ms++;
		}else{
			x = x-moves[i];
			ms++;
		}
		//ms++;

	}
	
	return ms;
}

int main(){
	int x;

	cin>>x;

	cout<<solution(x)<<endl;


}
