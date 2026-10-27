#include <iostream>
#include <vector>
using namespace std;

bool estaOrdenada(const vector<string>& v)
{
    bool ret = true;
    for (int i = 0; ret and i < int(v.size()); ++i)
    {
        if (i > 0 and v[i - 1] > v[i]) ret = false;
    }
    return ret;
}

int main()
{
    int n;
    int i = 0;
    int ultima = -1;
    while (cin >> n)
    {
        ++i;
        vector<string> seq(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> seq[i];
        }
        if (estaOrdenada(seq)) 
            ultima = i;
    }
    if (ultima == -1) cout << "No hi ha cap linia ordenada creixentment." << endl;
    else cout << "L'ultima linia ordenada creixentment es la " << ultima << "." << endl;
}