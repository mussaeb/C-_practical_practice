#include <bits/stdc++.h>
#include <iostream>


using namespace std;


int main(){
    int n;
    cin >> n;
    if(1<=n && n<=9)
    {
        switch(n)
        {
            case 1: cout<<"one"; break;
            case 2: cout<<"two"; break;
            case 3: cout<<"three"; break;
            case 4: cout<<"four"; break;
            case 5: cout<<"five"; break;
            case 6: cout<<"six"; break;
            case 7: cout<<"seven"; break;
            case 8: cout<<"eight"; break;
            case 9: cout<<"nine"; 
        }
    }
    else if (n>9)
    {
        cout<<"Greater than 9";
    }
    else {
        cout<<"less than one";
    }
        
    return 0;
}
