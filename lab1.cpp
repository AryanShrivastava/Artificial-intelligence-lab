#include <iostream> 

using namespace std; 

int minRats(int n) 
{ 
	return ceil(log2(n)); 
} 

int main() 
{ 
	// Number of bottles 
	int n = 1025; 

	cout << "Minimum " << minRats(n) 
		<< " rat(s) are required"
		<< endl; 

	return 0; 
} 