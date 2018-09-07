#include <iostream>

using namespace std;

string login,haslo;

int main()
{
    cout << "Podaj login:" << endl;
    cin >>login;

    cout <<"Podaj haslo:"<<endl;
    cin >>haslo;
if((login=="Login")&&(haslo=="Haslo"))
    {
        cout<< "witamy w systemie";
    }
    else
    {
        cout << "Bledny login lub haslo";
    }
    return 0;
}
