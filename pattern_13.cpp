/*    printing
54321
*4321
**321
***21
****1

*/

#include<iostream>
using namespace std;
int main(){
    for(int i=5 ; i>=1 ;i--)
    {
        for(int k=1 ; k<=5-i; k++){
            cout<<"*";
        }
        
        for(int j=i ; j>=1; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
}