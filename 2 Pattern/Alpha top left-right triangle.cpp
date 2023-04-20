#include <iostream>
using namespace std;
/*
-------n
ABCDCBA
ABC CBA
AB   BA
A     A
*/
int main()
{
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        char k='A';
        for(int j=1;j<=2*r-1;j++){
            if(j<=r+1-i || j>=r-1+i){
                cout<<k;
                j<r?k++:k--;
            }
            else{
                cout<<" ";
                if(j==r){
                    k--;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
