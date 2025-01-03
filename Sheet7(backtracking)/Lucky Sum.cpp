#include<bits/stdc++.h>
using namespace std;

vector<long long>luckyNumbers;
void generate(long long num,long long numOfDigits){
    if(numOfDigits==13){
        return;
    }
    luckyNumbers.emplace_back(num);
    generate(num*10+4 , numOfDigits+1);
    generate(num*10+7 , numOfDigits+1);
}

int main() {
    generate(0,0); 
    long long sum = 0;
    sort(luckyNumbers.begin(), luckyNumbers.end());

    long long l,r;
    cin>>l>>r;

    for(auto&val:luckyNumbers){
        if(val>=r){
            sum+=(r-l+1)*val;
            break;
        }
        if(val>=l){
            sum+=(val-l+1)*val;
            l=val+1;
        }
    }

    cout<<sum<<endl;

    return 0;
}
