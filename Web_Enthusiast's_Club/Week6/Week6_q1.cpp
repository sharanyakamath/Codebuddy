//Given a roman numeral, convert it to an integer.

//Sharanya Kamath and Het Shah

#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[1000];
    cin>>s;
    int l=strlen(s), num=0, i;
    int value[26]={0};
    value['I'-'A']=1;
    value['V'-'A']=5;
    value['X'-'A']=10;
    value['L'-'A']=50;
    value['C'-'A']=100;
    value['D'-'A']=500;
    value['M'-'A']=1000;
    for(i=0;i<l-1;i++){
        if(value[s[i]-'A']>=value[s[i+1]-'A'])
            num+=value[s[i]-'A'];
        else
            num-=value[s[i]-'A'];
    }
    num+=value[s[l-1]-'A'];
    cout<<num<<endl;
}