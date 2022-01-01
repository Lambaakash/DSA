/*
1
23
345
4567
56789
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;

    int i=1;
    while(i<n){
        int j=1;
        int num=i;
        while(j<=i){
            cout<<num;
            num++;
            j++;
        }
        cout<<endl;
        i++;
    }
}