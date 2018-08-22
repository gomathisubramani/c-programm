#include<iostream>
using namespace std;
class factorial
{
    private:
    int f=1,i,n;
    public:
    void fact()
    {
        cin>>n;
        for(i=2;i<=n;i++)
        {
            f=f*i;
        }
    }
    void display()
    {
        cout<<f;
    }
};
int main()
{
    factorial f;
     f.fact();
     f.display();
}
