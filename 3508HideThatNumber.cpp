#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<utility>
#include<queue>
#include<limits.h>
using namespace std;
char d[1000100];
char n[1000100];
int main()
{
    int q=1;
    while(scanf("%s",d),strcmp(d,"0")){
        int len = strlen(d);
        for(int i=0;i<len;i++) d[i]-='0';
        n[len] = 0;
        n[len-1] = d[len-1];
        for(int i=len-2;i>=0;i--){
            n[i] = d[i]-n[i+1];
            if(n[i]<0) {
                n[i]+=10;
                if(i>0)d[i-1]--;
            }
            //printf("%d\n",n[i]);                                              
        }
        for(int i=0;i<len;i++) n[i]+='0';
        if(n[0]=='0') printf("%d. IMPOSSIBLE\n",q++);
        else printf("%d. %s\n",q++,n);
    }
    return 0;
}


