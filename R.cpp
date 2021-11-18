#include <iostream>
#include<string>;
using namespace std;

int main() {
    int n,j,k;
    cin >> n;
	k = 1;
	j = k;
    
    for (int i=0; i < n; i++) {
		cout << k << " ";
		if (j == k)
		{++k;j = 1;}
		else
		{++j;}
    }
        
    return 0;
}