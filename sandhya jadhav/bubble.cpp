#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter number of element:";
    cin>>n;
    int a[n];
    cout<<"Enter"<<n<<"element:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"sorted array:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}

/*PS C:\Users\jadha> cd 'c:\sandhya jadhav\output'
PS C:\sandhya jadhav\output> & .\'bubblesort.exe'
Enter number of element:5
Enter5element:23
56
34
56
55
sorted array:23 34 55 56 56 */