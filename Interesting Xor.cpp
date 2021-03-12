//march long challange // Interesting xor
#include <iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
//	cout<<"GfG!";
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int k=n;
        vector<int> v;
        while(n){
            v.push_back(n%2);
            n /=2;
        }
        int m = v.size();
        int p = m-1;
        bool flag = true;
        long long a=0,b=0;
         
        //cout<<endl;
        for(int j = m-1;j>=0;j--,p--){
            if(v[j]==1){
                if(flag){
                    a += pow(2,p);
                    flag = false;
                }
                else{
                    b += pow(2,p);
                   // flag= true;
                }
            }
            else{
                a +=pow(2,p);
                b +=pow(2,p);
            }
        }
         
      //  cout<<a<<" "<<b<<endl;
        long long cnt = a*b;
        cout<<cnt<<endl;
    }
	return 0;
}
