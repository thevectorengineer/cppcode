#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    
    int array[n];
    
    for(int i=0; i<n;i++){
        cin>>array[i];
    }
    for(int i=0; i<n;i++){
        maxi = max(maxi,array[i]);
        mini = min(mini,array[i]);
    }
    cout<<maxi<<" "<<mini;
    cout<<endl;
    
    return 0;
} 