#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main()
{
    ifstream in("text.txt");
    int A, B, C, D, n, x, m, y;
    bool check[10];
    vector<int> a,b;
    a.push_back(x);
    b.push_back(y);
    for(int i = 2;i<=n;i++)
    {
        int aux;
        aux = A + (a.back() * C + D) % (B - A + 1);
        a.push_back(aux);
    }
    for(int i = 2; i <= m; i++)
    {
        int aux;
        aux = A + (b.back() * C + D) % (B - A +1);
        b.push_back(aux);
    }
    for(auto &it:a)
    {
        check[it] = true;
    }
    for(auto &it:b)
    {
        if(check[it] == true)
            cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}