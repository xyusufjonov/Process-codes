#include <iostream>
using namespace std;
int gcd(int n, int m){
    int big;
    if (n>m) {
        big = n;
    }else if (m>n) {
        big = m;
    }else {
        return n;
    }
    int max = 1;
    for (int i = 1;i<=big;i++) {
        if (n%i == 0 && m%i == 0) {
            max = i;
        }
    }
    return max;

}
int main() {
    cout<< gcd(25,10) << endl;
}