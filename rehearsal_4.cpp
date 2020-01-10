#include <iostream>
using namespace std;

string compress(string x){
    string y;
    int i=0,N=x.size();
    while(i<N){
        y=y+x[i];
        i=i+3;
    }
    return y;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    string A = compress("CPECMU");
    string B = compress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n"<< A << "\n"<< B << "\n";

}
