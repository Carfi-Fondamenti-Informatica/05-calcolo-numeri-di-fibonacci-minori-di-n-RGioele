#include <iostream>
using namespace std;

int main() {
    int n=0,a=1, b=1;
        cin >> n;
            cout << a << endl;
            for (int i = 0; i <= n ; i++) {
                int c = a;
                a += b;
                b = c;
                if(c<=n)
                    cout<<c<<endl;
            }
   return 0;
}
