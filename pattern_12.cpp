/*
i=1///2
j=5//4//3//2//1
print
54321

printing 
54321
4321
321
21
1

*/

#include<iostream>
using namespace std;
int main(){
    for(int i=5 ; i>=1 ; i--){
        for(int j=i ; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}