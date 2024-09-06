#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"ANS : "<<pow(2,i)<<endl;
    }
    return 0;
}