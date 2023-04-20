#include <iostream>
using namespace std;
int addBinary(int a, int b){
    int sum=0;
    int carry=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            sum=sum*10+carry;
            carry=0;
        }
        else if((a%2==0 && b%2==1) ||(a%2==1 && b%2==0)){
            if(carry==1){
                sum=sum*10+0;
                carry=1;
            }
            else{
                sum=sum*10+1;
                carry=0;
            }
        }
        else{
            sum=sum*10+carry;
            carry=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(carry==1){
            if(a%2==1){
                sum=sum*10+0;
                carry=1;
            }
            else{
                sum=sum*10+1;
                carry=0;
            }
        }
        else{
            ans=ans*10+(a%2);
        }
        a/=10;
    }
    while(b>0){
        if(carry==1){
            if(b%2==1){
                sum=sum*10+0;
                carry=1;
            }
            else{
                sum=sum*10+1;
                carry=0;
            }
        }
        else{
            ans=ans*10+(b%2);
        }
        b/=10;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;
    return 0;
}
