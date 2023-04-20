#include <iostream>
using namespace std;
/*
  1
 121
12321
-----n
*/
int main()
{
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        int k=1;
        for(int j=1;j<=2*r-1;j++){
            if(j>=r+1-i && j<=r-1+i){
                cout<<k;
                j<r?k++:k--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
