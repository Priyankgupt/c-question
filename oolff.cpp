//q-1.2
//using friend function
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
    friend opdemo operator++(opdemo &ob);
    friend opdemo operator--(opdemo &ob);
    void show()
    {
        cout<<"x="<<x<<endl;
    }
};
opdemo operator++(opdemo &ob)
{
    opdemo tob;
    ob.x++;
    tob.x=ob.x;
    return tob;
}
opdemo operator--(opdemo &ob)
{
    opdemo tob;
    ob.x--;
    tob.x=ob.x;
    return tob;
}
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
