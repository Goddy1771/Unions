#include <iostream>
using namespace std;
union Data{
int intval;
float floatval;
char charval;
};
int main()
{
    Data data;
    data.intval=20;
    cout<<"integer value"<<data.intval<<endl;
    data.floatval=30.99;
    cout<<"float value"<<data.floatval<<endl;
    data.charval='A';
    cout<<"character value"<<data.charval<<endl;
    return 0;
}
