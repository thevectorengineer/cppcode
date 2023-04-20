#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int last=n%10;
        sum=sum+pow(last,3);
        n=n/10;
    }
    if(sum==originaln){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}
