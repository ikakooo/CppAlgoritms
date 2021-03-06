#include<iostream>
using namespace std;
  long long i, n, j, num[10000001],maxPrimes=0;

main(){
    cin>>n;
    for(i = 2; i <=n; i++) {
           if (num[i] == 1)  continue;
                    else
           {
           for (j=i*i; j<=n; j=j+i)
                if (num[j]==0) num[j]=i;
           }

            if(num[n]==2){
        maxPrimes++;
    }
    }
  // while (n+1>5) {

   // n--;
  // }
cout<<maxPrimes;
}



