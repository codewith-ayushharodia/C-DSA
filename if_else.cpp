#include <bits/stdc++.h>
using namespace std;

int main(){
    char x;
    cout<<"Enter a grade: ";
    cin>>x;
    x = toupper(x);
    if (x == 'A'){cout<<"Great";}
    else if (x == 'B'){cout<<"Good";}
    else if (x == 'C'){cout<<"Improveent expected";}
    else{cout<<"Failed!";}
    return 0;
}