#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[100], i , n ;
    cout<<"enter the number of elements of an array=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"display an array"<<endl;


     for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";

    }
    cout<<endl;
    int j;
    cout<<"Enter the case(1,2,3,4) which you want to execute=";
    cin>>j;
    switch(j)
   {

  case 1:


    int s,p;
    cout<< "enter the new elements in the array=";
    cin>>s;
    cout<<endl;
    cout<< "position =";
    cin>>p;
    for(i=n;i>p;i--)
    {
        a[i]=a[i-1];

    }
    a[p]=s;
    n++;
    cout<<"new array"<<endl;
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";

    }
    case 2:
    int g;
     cout<<"Deletion"<<endl;

      cout<< "position =";
    cin>>g;
     for(i=p;i<n;i++)
    {
        a[i]=a[i+1];

    }
     n--;
    cout<<"new array"<<endl;
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";

    }
   }
    return 0;

}
