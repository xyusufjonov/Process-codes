#include <iostream>
using namespace std;
#include <vector>
int howmany(int n) {
    if (n==0) {
        return 1;
    }
    int count = 0;
    while (n>0) {
        n=n/10;
        count++;

    }
    return count;
}
bool isPalindrome(int n) {
    int digits = howmany(n);
    vector <int> arr;
    for (int i = 0 ; i < digits; i++) {
        arr.push_back(n%10);
        n=n/10;
    }
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i]!=arr[arr.size()-1-i]) {
            return false;
        }
    }
    return true;
}
int main() {
    cout << isPalindrome(303);
}