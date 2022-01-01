/*   Simple for loop practice
12345
1234*
123**
12***
1****


i=2
j=4, 4<=4
n=1,  2<1
print
12345
1234



*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5 ; i++){
        for(int j=1 ; j<=6-i ; j++){
            cout<<j;
            for(int n=2 ; ;n++ ){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}




