#include <iostream>
int a[30];
int j = 0;
using namespace std;
int numbergame(int c,int d){
    
    if((c-d)%2 == 1){
            return -1;
        }
    if((d-c)%2 == 1){
            return -1;
        }
        else if(c==0 && d==0){
            return 0;
        }
        else if(c==(-1*d)){
            return 1;
        }
        else{
            return 2;
        }
}
int main()
{
    int t;
    cin>>t;
    for(int _ = 0; _ < t; _++){
        int c , d;
        cin>>c>>d;
        cout<<numbergame(c,d)<<endl;
        
    }
    return 0;
}
