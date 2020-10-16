//q2.2
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
    friend opdemo operator++(opdemo &ob,int);
    friend opdemo operator--(opdemo &ob,int);
    void show()
    {
        cout<<"x="<<x<<endl;
    }
};
opdemo operator++(opdemo &ob,int)
{
    opdemo tob;
    ob.x++;
    tob.x=ob.x;
    return tob;
}
opdemo operator--(opdemo &ob,int)
{
    opdemo tob;
    ob.x--;
    tob.x=ob.x;
    return tob;
}
int main()
{
    opdemo ob1;
    cout<<"post-increment"<<endl;
    ob1.setdata(5);
    ob1++;
    ob1.show();

    cout<<"post-increment"<<endl;
    ob1.setdata(5);
    ob1--;
    ob1.show();

    return 0;
}
