#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int num = 0;
    int max = 0;
    string s[1000];
    string s0;
    while (cin >>n) {
        memset(s, 0, 1000);
        if (n == 0) {
            continue;
        }
        for (int i = 0; i < n; i++) {
            cin >>s[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (s[i] == s[j]) {
                    num++;
                }
            }
            if (max < num) {
                max = num;
                s0 = s[i];
            }
            num = 0;
        }
        cout<<s0<<endl;
        max = 0;
    }
}
