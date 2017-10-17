//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
int a, c=0;
bool result=false;

void moo(int n)
{
    if(result)
        return;
    if(n==1){
        if(c+1==a){
            cout << "m" << endl;
            result=true;
        }
        else if(c+2==a || c+3==a){
            cout << "o" << endl;
            result=true;
        }
        c+=3;
        return;
    }
    moo(n-1);
    if(c+1==a){
        cout << "m" << endl;
        result=true;
    }
    c+=1;
    for(int i=0;i<n+1;i++){
        c++;
        if(c==a){
            cout << "o" << endl;
            result=true;
        }
    }
    moo(n-1);
    
}

int main()
{
    cin >> a;
    
    moo(28);
    
    return 0;
}
