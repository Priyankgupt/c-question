#include<iostream>
using namespace std;
class opdemo
{
private:
    int x;
public:
    void setdata(int a)
    {
        x=a;
    }
    opdemo operator++()
    {
        opdemo tob;
        x++;
        tob.x=x;
        return tob;
    }
    opdemo operator--()
    {
        opdemo tob;
        x--;
        tob.x=x;
        return tob;
    }
    void show()
    {
        cout<<"x="<<x<<endl;
    }

};
int main()
{
    opdemo ob1;
    cout<<"pre-increment"<<endl;
    ob1.setdata(5);
    ++ob1;
    ob1.show();


    cout<<"pre-increment"<<endl;
    ob1.setdata(5);
    --ob1;
    ob1.show();


    return 0;
}
