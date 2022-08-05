#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int temp;
        std::vector<int>vec ;
        for(int i=0 ; i<3 ; i++){
            cin>>temp;
            vec.push_back(temp);
        }
        sort(vec.begin() , vec.end());
    cout << vec[1] << endl;
    }
	
	return 0;
}
