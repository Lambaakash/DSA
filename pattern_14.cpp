// Trying dubang code.. 

#include<iostream>
using namespace std;
int main(){
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j<=6-i; j++){
            cout<<j;
        }
        for(int k=2 ; k<=i ; k++){
            cout<<"*";
        }
        for(int l=1 ; l<=5-i ; l++){
            cout<<"*";
        }
        for(int m=i ; m>=1 ; m--){
            cout<<m;
        }
        cout<<endl;
    }
}