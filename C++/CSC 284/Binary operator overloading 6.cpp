/*Design a Currency class that represents different currencies and their values in USD.
Overload the * operator to convert an amount from one currency to another.*/
#include<iostream>
using namespace std;
class Currency
{
    float value_in_USD;
public:
    Currency(float value)
    {
        value_in_USD = value;
    }

    Currency operator *(Currency &another)
    {
         return Currency(value_in_USD*another.value_in_USD);
    }
    void show()
    {
        cout<<"Value is USD: "<<value_in_USD<<endl;
    }
};
int main()
{
    Currency taka(100);
    Currency dirham(3.67);
    Currency euro(0.91);
    cout<<"Taka: ";
    taka.show();
    cout<<"Dirham: ";
    dirham.show();
    cout<<"Euro: ";
    euro.show();
    Currency convertedTaka = taka * euro;
    Currency convertedDirham = dirham * taka;
    Currency convertedEuro = euro * dirham;
    convertedTaka.show();
    convertedDirham.show();
    convertedEuro.show();
    return 0;
}
