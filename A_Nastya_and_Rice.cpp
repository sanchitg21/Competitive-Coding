#include <iostream>
using namespace std;
int main() {
	int i,n,l,r;
	cin >> n;
	for(i=0;i<n;i++) {
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		l = n*(a-b), 
        r = n*(a+b);
		if (r < (c - d) || (c + d) < l)
		    cout << "No"<< endl;
		else
		    cout << "Yes" << endl;
    	}
    }