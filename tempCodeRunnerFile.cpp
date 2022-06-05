#include<iostream>
using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
    int ans;
    if(A>B){
        B++;
        ans=A-B;
    }
    else{
        A++;
        ans=B-A;
    }
    cout<<ans<<endl;
}