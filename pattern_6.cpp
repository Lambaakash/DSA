#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=3;i++)
    {
        for(int j=3;j>i;j--)
        {
            cout<<"#";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


for(i=1;i<=4;i++) //row
for(j=3;j>i;j--) // space
for(k=1;k<=i;i++)
//*