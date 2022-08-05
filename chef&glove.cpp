#include <iostream>
using namespace std;

int main() {
//     // int n;
//     // cin>>n;
// 	for(int i =9; i>0; i-- ){
// 	    cout<<i<<endl;
// 	}
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int L[n] , G[n] , a=1 , b=1;
    for(int i=0 ; i<n;i++){
        cin>>L[i];
        // cout<<L[i]<<" ";
    }
    // cout<<endl;
      
    for(int j=0 ; j<n;j++){
        cin>>G[j];
        // cout<<G[j]<<" ";
    }
    //   cout<<endl;
    // int i,j;
    //   for( i=0;i<n;i++){
    //       for( j=0;j<n;j++){
              
    //           if(L[i]<G[j])
    //             cout<<"front"<<endl;
    //           else if(L[i]==G[j])
    //               cout<<"both"<<endl;
              
    //         //   else
    //         //       cout<<"none"<<endl;
    //       }
    //   }
    for(int i=0;i<n;i++){
        if(L[i]>G[i])
        a=0;
        if(L[i]>G[n-i-1])
        b=0;
    }
    if(a==0&&b==0){
        cout<<"none"<<endl;
    }
   else if(b==0&&a==1){
    cout<<"front"<<endl;
    }
   else if(a==0&&b==1){
        
    cout<<"back"<<endl;
    }
    else{
        
    cout<<"both"<<endl;
    }
}
	return 0;
}
