#include <iostream>
using namespace std;

class Point
{
    private: //РЕАЛИЗАЦИЯ - инкапсулированная часть класса!!!
    int numr; //поля класса Point
    int denom;
    public: //ИНТЕРФЕЙС КЛАССА
    void Print() //методы класса Point
    {
        cout<<numr<<"/"<<denom<< endl;
    }
    // void Init()
    // {
    //     x=rand()%10;
    //     y=rand()%20;
    // }
    void Init(int _x, int _y)
    {
        numr=_x;
        denom=_y;
    }
    //методы аксессоры
    void SetNUMR(int v) //Модификатор
    {
            numr=v;
    }
    void SetDENOM(int v)//модификатор
    {
            denom=v;
    }
    int GetNUMR()//инспектор
    {
        return numr;
    }
    int GetDENOM()
    {
        return denom;
    }
    void AddVALUE(int a)
    {
           numr+=a*denom;
    }
    void SubtractVALUE(int a)
    {
             numr-=a*denom;
    }
    void MultipleVALUE(int a)
    {
        numr*=a;
    }
    void DivVALUE(int a)
    {
        denom*=a;
    }
    Point SumFRACT(Point second)
    {
        Point rez;
        rez.numr=numr+second.numr;
        rez.denom=denom;
        return rez;
    }
    Point SubFRACT(Point second)
    {
        Point rez;
        rez.numr=numr-second.numr;
        rez.denom=denom;
        return rez;
    }
    Point MultipleFRACT(Point second)
    {
        Point rez;
        rez.numr=numr*second.numr;
        rez.denom=denom*second.denom;
        return rez;
    }
    Point DivFRACT(Point second)
    {
        Point rez;
        rez.numr=numr*second.denom;
        rez.denom=denom*second.numr;
        return rez;
    }
    
};

int main(){
cout<<"VALUE"<<endl;
Point first;
// a.Init();
// a.Print();
first.Init(1, 2);
first.Print();
// int x=a.GetX();
// cout<<x<<endl;
// a.SetX(100);
// a.Print();
first.AddVALUE(5);
first.Print();

first.SubtractVALUE(4);
first.Print();

first.MultipleVALUE(3);
first.Print();

first.DivVALUE(3);
first.Print();

cout<<"FRACTION"<<endl;
Point second;
first.SetNUMR(6);
first.SetDENOM(5);

second.SetNUMR(3);
second.SetDENOM(5);

int x=first.GetNUMR();
int y=first.GetDENOM();
cout<<"First NUMR is "<<x<<endl;
cout<<"First DENOM is "<<y<<endl;

int x1=second.GetNUMR();
int y2=second.GetDENOM();
cout<<"Second NUMR is "<<x1<<endl;
cout<<"Second DENOM is "<<y2<<endl;

// first.SumFRACT(second);
Point rez=first.SumFRACT(second);
rez.Print();

// first.SubFRACT(second);
rez=first.SubFRACT(second);
rez.Print();

// first.MultipleFRACT(second);
rez=first.MultipleFRACT(second);
rez.Print();

// first.DivFRACT(second);
rez=first.DivFRACT(second);
rez.Print();
    return 0;
}