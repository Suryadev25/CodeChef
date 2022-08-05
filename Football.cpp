#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n], B[n], C[n];
	    for(int i=0 ; i<n;i++){
	        cin>>A[i];
	       // cout<<A[i]*20<<" "<<endl;
	    }
	    
	    for(int j=0;j<n;j++){
	        cin>>B[j];
	       // cout<<B[j]*10<<endl;
	   
	    }
	   int max=0;
	   // for(int i=0;i<n;i++){
	   //     for(int j=0 ; j<n;j++){                  /*Previous approach*/
	   //         if(((A[i]*20)-(B[j]*10)) > max)
	   //         max==((A[i]*20)- (B[j]*10));
	   //     }
	   // }
	   for(int k=0 ; k<n ; k++){
	       C[k] = (A[k]*20 - B[k]*10);
	       //cout<<C[k]<<endl;
	       if(C[k]>=max){
	           max=C[k];
	           
	       }
	   }
	               cout<<max<<endl;
	    
	}
	return 0;
}