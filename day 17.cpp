#include<iostream>
using namespace std;
int main()
{
    int i,f,a,n;
    cout<<"enter any no.= ";
    cin>>n;
    cout<<"factors are = ";
    for(i=1;i<=n;i++)
    {
        a=n%i;
        if(a==0)
        {
            cout<<" "<<i;
        }
    }
}
