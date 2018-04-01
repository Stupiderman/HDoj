#include <iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s1,s2;
    int sizeC1,sizeC2;
    char sum[1001];
    cin >>n;
    for (int i = 1; i <= n; i++) {
        cin >>s1>>s2;
    
    cout <<"Case "<<i<<":"<<endl;
    cout <<s1<<" "<<"+"<<" "<<s2<<" "<<"="<<" ";
    sizeC1 = s1.size();
    sizeC2 = s2.size();
    int size = 0;
    int c = 0;
    for (; sizeC1 > 0 ||sizeC2 > 0; sizeC1--,sizeC2--) {
        if (sizeC1 >0 &&sizeC2 > 0) {
            sum[size] = ((s1[sizeC1 - 1] - '0')+(s2[sizeC2 - 1] - '0')+c)%10 +'0';
            c = ((s1[sizeC1 - 1] - '0')+(s2[sizeC2 - 1] - '0')+c)/10;
            
        }else if (sizeC1 > 0){
            sum[size] = (s1[sizeC1 - 1] - '0' + c)%10 +'0';
            c = ((s1[sizeC1 - 1] - '0') +c)/10;
        }else{
            sum[size] = (s2[sizeC2 - 1] - '0' + c)%10 +'0';
            c = ((s2[sizeC2 - 1] - '0') +c)/10;;
        }
        size++;
    }
    if (c > 0) {
        cout <<'1';
    }
    for (int k = size-1; k >= 0; k--) {
        cout<<sum[k];
    }
        cout <<endl;
        if (i != n) {
            cout <<endl;
        }
    }
    return 0;
}

