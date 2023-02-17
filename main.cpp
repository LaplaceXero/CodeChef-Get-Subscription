#include <iostream>
using namespace std;

int main() {
	
	int testCases{};
	int x; //meeting duration
	
	cin >>testCases;
	
	for(int i{}; i < testCases; i++)
	{
	    cin >>x;
	    
	    if(x > 30)
	        cout <<"Yes" <<"\n";
	        
	   else
	        cout <<"No" <<"\n";
	        
	}
	return 0;
}
