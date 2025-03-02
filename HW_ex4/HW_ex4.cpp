#include <string>
#include <iostream>

using namespace std;

int main() {
    char C = '.';
    string S = "hello world. hello step. hello it.";
    string S0 = " good";

    for (size_t i = 0; i < S.length(); ++i) {
        if (S[i] == C) {
            S.insert(i/*+1 для задания 5*/, S0);
            i += S0.length();
        }
    }

    cout << S << endl; 

    return 0;
}