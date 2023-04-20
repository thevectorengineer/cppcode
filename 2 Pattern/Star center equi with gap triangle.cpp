#include <iostream>
using namespace std;
/*
  *
 * *
* * *
------n
*/
int main()
{
    int r, c;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        int k=1;
        for(int j=1;j<=c;j++){
            if(j>=r+1-i && j<=r-1+i && k){
                 cout<<"*";
                 k=0;
            }
            else{
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }

    return 0;
}

