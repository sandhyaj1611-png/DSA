#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x )
{
    for(int i=0;i<n;i++)
    {
 if(a[i]==x)
 return(i);   
    }
 return(-1);
    }
    int main()
    {     
   int a[10],x,n;
   cout<<"How many elements";
   cin>>n;
   cout<<"Enter"<<n<<"Elements";
        for(int i=0;i<n;i++)
    {     
    cin>>a[i];
    }
     cout<<"Enter the element to be searched";
     cin>>x;
     int position=0;
     position=linear_search(a,n,x);
     if(position==-1)cout<<"Element not found";
     else cout<<"Element found at position:"<<position;
     return(0);
    }


    /*PS C:\sandhya jadhav> cd 'c:\sandhya jadhav\output'
PS C:\sandhya jadhav\output> & .\'linearsearch.exe'
How many elements5
Enter5Elements10
20
30
40
50
Enter the element to be searched40
Element found at position:3*/