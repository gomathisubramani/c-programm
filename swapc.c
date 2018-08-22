#include<iostream>
using namespace std;
class swap
{
    public:
    int a,b;
    void swa()
    {
        cin>>a>>b;
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void display()
    {
    cout<<a<<" "<<b;

    }
    
}s;
int main()
{
    s.swa();
    s.display();
}
