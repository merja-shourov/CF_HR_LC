    #include<bits/stdc++.h>
    using namespace std;

    int main(void){
        int t; cin >> t;
        while( t-- ){
            int a,b;
            cin >> a >> b;
            int diff = abs(a-b);
            if( diff % 10 == 0 ){
                cout << diff/10 << endl;
            }else{
                cout << (diff/10) + 1 << endl;
            }
        }
        return 0;
    }