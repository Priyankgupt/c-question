//Using friend function
#include<iostream>
using namespace std;
class Time
{
private:
    int hr,mn,sc;
public:
    void setdata(int h,int m,int s)
    {
        hr=h;
        mn=m;
        sc=s;
    }
    friend Time operator+(Time ob1,Time ob2);
    void show()
    {
        cout<<hr<<":"<<mn<<":"<<sc<<endl;
    }
};
Time operator+(Time ob1,Time ob2)
{
    Time temp;
        int m,s;
        temp.hr=ob1.hr+ob2.hr;
        temp.mn=ob1.mn+ob2.mn;
        temp.sc=ob1.sc+ob2.sc;
        if(temp.sc>=60)
        {
            s=temp.sc/60;
            temp.sc=temp.sc%60;
            temp.mn+=s;
        }
        if(temp.mn>=60)
        {
            m=temp.mn/60;
            temp.mn=temp.mn%60;
            temp.hr+=m;
        }
        return temp;
}
int main()
{
    Time ob1,ob2,ob3;
    ob1.setdata(5,34,53);
    ob2.setdata(6,30,20);
    ob3=ob1+ob2;
    ob3.show();
    return 0;
}
