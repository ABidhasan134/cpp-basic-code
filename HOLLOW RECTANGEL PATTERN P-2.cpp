#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the row number:";
    cin>>row;
    cout<<"Enter the col number:";
    cin>>col;
    for(int i=1;i<=row;i++) //this refer to row number
    {
        for(int j=1;j<=col;j++)//this refer to col number
        {
            if(i==1 || i==row)//only the top i==1 and bottom i==row will print *
            {
                cout<<"*";
            }
            else if(j==1 || j==col)//the side col will print *
            {

                cout<<"*";
            }
            else{
                cout<<" ";//if thous condition will not match this will print the space
            }
        }
        cout<<endl;


    }
    return 0;
}
