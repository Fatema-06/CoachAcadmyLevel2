#include <iostream>
using namespace std;

int main() {
    long long n,m;
    cin>>n>>m;

    long long moves=0;

    if(m%n!=0){
        cout<<-1<<endl;
        return 0;
    }

    long long ratio=m/n;

    while(ratio%2==0){
        ratio/=2;
        moves++;
    }

    while(ratio%3==0){
        ratio/=3;
        moves++;
    }

    if(ratio!=1){
        cout<<-1<<endl;
    }
    else{
        cout<<moves<<endl;
    }

    return 0;
}
