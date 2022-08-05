#include <iostream>
// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int factorial = 1;
	    for(int i = 2; i <= n; i++)
	    {
	        factorial = factorial * i;
	    }
	    cout<<factorial<<endl;
	}
	return 0;
}

