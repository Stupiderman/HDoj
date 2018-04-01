//#include <iostream>
//using namespace std;
//
//int main(){
//    int num;
//    cin >>num;
//    for (int i = 0; i < num ; i++) {
//        int n;
//        int array[100000+11];
//        cin >>n;
//        for (int j = 0; j < n; j++) {
//            cin >>array[j];
//        }
//        int sum = 0,max = 0;
//        int first = 0,finsh = 0;
//        for (int j = 0; j < n; j++) {
//            for (int k = j; k < n; k++) {
//                sum = sum + array[k];
//                if (max <= sum) {
//                    first = j;
//                    finsh = k;
//                    max = sum;
//                }
//            }
//            sum = 0;
//        }
//        cout<<"Case "<<i+1<<":"<<endl;
//        cout<<max<<" "<<first+1<<" "<<finsh+1<<endl;
//        if (i < num-1) {
//            cout <<endl;
//        }
//    }
//}

#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int a[100000+11];
int d[100000+11];
int main()
{
    int t;
    scanf("%d",&t);
    int k=0;
    while(t--)
    {
        int sum=0;
        int n,begin,end;
        int max0=-1001;                            //max0必须小于所有可能的整数
        scanf("%d",&n);
        memset(a,0,sizeof(a));
        memset(d,0,sizeof(d));
        for(int i = 1 ; i <= n ; i++)
        {
            scanf("%d",&a[i]);
            d[i]=max(d[i-1]+a[i],a[i]);
            if(max0 < d[i])
            {
                max0=d[i];                        //记录序列和的最大值
                end=i;                            //记录和最大的序列的尾
            }
        }
        for(int i = end ; i >= 1 ; i--)
        {
            sum+=a[i];
            if(sum == max0)
            {
                begin=i;
            }
            
        }
        printf("Case %d:\n",++k);
        printf("%d %d %d\n",max0,begin,end);
        if(t)
        {
            printf("\n");                //注意输出格式
        }
        
    }
}

