#include <iostream>

using namespace std;

int main()
{
    string a;
    string b;
    string c;

    cin >> a;
    cin >> b;
    c = a;
    int temp = 0;


    for (int i = a.size() - 1; i >= 0 ; i--)
    {
        int al = a[i] - 97;
        int bl = b[i] - 97;
        
        char cl = char(((al + bl + temp) % 26) + 97);
        temp = ((al + bl + temp) / 26);
        //cout << cl << " ";
        c[i] = cl;

    }

    //cout << "\nc: "<< c;
    cout << c;
    
    return 0;
}