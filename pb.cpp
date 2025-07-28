#include<bits/stdc++.h>
using namespace std;

int main(){
int num = 12212;
int c=0;
string s = to_string(num);
int len = s.length();
for(int i=0,j=len-1;i<len;i++,j--){
    if(s[i]==s[j]){
        c++;
    }
}
if(c==len){
    cout<<"palindrome number"<<endl;
}
else{
    cout<<"not palindrom";
}




}
