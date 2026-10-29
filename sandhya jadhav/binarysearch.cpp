#include <iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int first=0,last=n-1,mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==x)return(mid);
        else if(a[mid]<x)first=mid+1;
        else last=mid-1;

    }

    return(-1);

    }

    int main()

    {

        int a[10],x,n;

        cout<<" How many elements:";

        cin>>n;

        cout<<"Enter "<<n<<"elements: ";

        for(int i =0; i <n; i++)
    {
        cin>>a[i];

    }
    cout<<"enter the element to be searched:";

    cin>>x;

    int position=0;

    position=binary_search(a,n,x);

    if(position==-1) cout<<"element not found";

    else cout<<"element found at position:"<<position;

    return (0);

}
/*PS C:\sandhya jadhav> cd 'c:\sandhya jadhav\output'
PS C:\sandhya jadhav\output> & .\'binary.exe'
 How many elements:4
Enter 4elements: 10
20
30
40
enter the element to be searched:30
element found at position:2*/