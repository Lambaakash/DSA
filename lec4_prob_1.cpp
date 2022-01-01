/* Pattern
12345
12345
12345
12345
12345 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;    //cout<<n-j+1  ----- to print reverse of this program
            j++;
        }
        cout<<endl;
        i++;
    }
}