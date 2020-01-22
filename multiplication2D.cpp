#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int    a[100][100],b[100][100],c[100][100],n,n1,i,j,r,r1,co,co1;



    cout<<endl;
    cout<<"Enter the ROW =";
    cin>>r;
        cout<<endl;
     cout<<"Enter the  COLUMN= ";
     cin>>co;
     cout<<endl;
     cout<<endl;
     cout<<"array elements of A ";
     cout<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<co;j++)
            {

            cin>>a[i][j];
            }
        }
             cout<<endl;
             cout<<"Array A"<<endl;
             cout<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<co;j++)
            {

            cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }

        cout<<endl;
        cout<<endl;


    cout<<"array elements of B  ";
    cout<<endl;


        cout<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<co;j++)
            {

            cin>>b[i][j];
            }
        }
        cout<<endl;
        cout<<endl;
            cout<<"Array B"<<endl;
            for(i=0;i<r;i++)
            {
            for(j=0;j<co;j++)
            {

            cout<<b[i][j]<<"\t";
            }
          cout<<endl;
        }
        cout<<endl;
        cout<<endl;

        cout<<"MULTIPLICATION OF ARRAY A AND B"<<endl;

         for(i=0;i<r;i++)
            {
            for(j=0;j<co;j++)
            {
            c[i][j]=a[i][j]*b[i][j];

            cout<<c[i][j]<<"\t";
            }
          cout<<endl;
        }
return 0;
        }
