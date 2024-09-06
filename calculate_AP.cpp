#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
       cout<<count<<endl;
       count=count+2;
    }
    return 0;
}