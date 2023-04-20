#include <iostream>
using namespace std;
/*
  *
 ***
*****-----n
 ***
  *
*/
int main()
{
    int row,mid,value=0;
    cin>>row;
    mid=(row+1)/2;
    for(int i=1;i<=row;i++){
        if(row%2==0){
            if(i<=mid) value++;
            if(i>mid+1) value--;
        }
        else{
            i<=mid?value++:value--;
        }
        for(int j=1;j<=row;j++){
            if(j>=mid+1-value && j<=mid-1+value){
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
