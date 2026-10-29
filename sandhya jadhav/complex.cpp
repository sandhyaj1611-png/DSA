#include<iostream>
using namespace std;
class Complex{
private:
float real;
float imag;
public:
Complex()
{
    real=0;
    imag=0;
}
Complex(float r,float i)
{
real=r;
imag=i; 
}
~Complex()
{
}
void display(void)
{
    cout<<real<<"+"<<imag<<"j"<<endl;
}
};
int main()
{
    Complex c1(2.0,3.0);
    cout<<"Complex no. is"<<endl;
    c1.display();
    Complex c2(5.0,7.0);
    cout<<"Complex no. is"<<endl;
    c2.display();
     Complex c3(-2.0,3.0);
    cout<<"Complex no. is"<<endl;
    c3.display();
     Complex c4(5.0,-7.0);
    cout<<"Complex no. is"<<endl;
    c4.display();
    return(0);
}

/*PS C:\Users\jadha> cd 'c:\sandhya jadhav\output'
PS C:\sandhya jadhav\output> & .\'complex.exe'
Complex no. is
2+3j
Complex no. is
5+7j
Complex no. is
-2+3j
Complex no. is
5+-7j*/