#include<iostream>
using namespace std;

int main(){
    
    int A = 0,B= 0,n= 0;
 
    int a[1000];
    
    int i=0;
  
    while (cin>>A>>B>>n) {
        if (n==0) {
            continue;
        }
        memset(a,0,1000);
        a[0] = 1;
        a[1] = 1;
        for (i = 2; i <49; i++) {
            a[i] = (A*a[i-1]+B*a[i-2])%7;
        }
        cout<<a[(n-1)%49]<<endl;
    }
    
}
