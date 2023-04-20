#include<iostream>
using namespace std;

int main(){

int F, C;
    int S, E, W;
    cin>>S;
    cout<<endl;
    cin>>E;
    cout<<endl;
    cin>>W;
    cout<<endl;
    
    for (F=S;F<=E;F+=W) {
        C =(F-32)/1.8;
        cout<<F<<"\t"<<C<<endl;
    }
    return 0;
}
