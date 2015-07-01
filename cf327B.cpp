#include <bits/stdc++.h>

using namespace std;
 
int main(){

       int n,num,t,div,count;
       
       scanf("%d", &n);

       printf("%d ",2); /*2 is first prime number*/

       count=1;
       num=3;

       while(count<n){

           t=sqrt(num);

           div=2;

           while(div<=t){

             if(num%div==0)
                break;
             div++;

           }

           if(div>t)
           {
              printf("%d ",num);
              count++;
           }
           num=num+2;
       }

       cout << endl;
       return 0;
}