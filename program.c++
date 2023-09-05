#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for (i=1;i<=n;i++)
    {
            for(j=1;j<=i;j++)
            {
             cout<<"*";
            }


        int space=2*n-2*i;
            for(int j=1; j<=space;j++)
            {
                cout<<" ";
            }
            for(j=1;j<=i;j++)//this loop working after the space count
            {
                cout<<"+";
            }
            cout<<endl;
    }

  for (i=n;i<=n;i--)
    {
            for(j=1;j<=i;j++)
            {
             cout<<"*";
            }


        int space=2*n-2*i;
            for(int j=1; j<=space;j++)
            {
                cout<<" ";
            }
            for(j=1;j<=i;j++)//this loop working after the space count
            {
                cout<<"+";
            }
            cout<<endl;
    }





    return 0;
}
