#include <iostream>
using namespace std;
/*
-----n
*********
**** ****
***   ***
**     **
*       *

*/
int main()
{
    int r, c;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(j<=r+1-i || j>=r-1+i){
                 cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
