#include <iostream>
using namespace std;

int main() {
    int n=0,m=1,r=0,a=1;
    cin >> n;
    if(n>=2){
        cout << a << endl;
        cout << m << endl;
        for(int i=2; i<n; i++){
                r=m+a;
                cout << r << endl;
                a=m;
                m=r;

        }
    } else{
        cout << "errore" << endl;
    }

    return 0;
}
