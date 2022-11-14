
#include<iostream>
using namespace std;

int main()
{
    int i,n ,fact=1;
    cout<<"Enter your number";
    cin>>n;
    for(i=0;i<n;i++){
        fact =fact*i;
    }
    cout<<n<<fact;
    return 0;
}
