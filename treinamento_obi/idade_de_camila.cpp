#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cin >> x;
    cin >> y;
    cin >> z;

    if((x < z && x > y) || (x < y && x > z))
    {
        cout << x;
    }
    else if((y < x && y > z) || (y < z && y > x))
    {
        cout << y;
    }
    else if ((z < x && z > y) || (z < y && z > x)) {
        cout << z;
    }
    else if (x==z || x==y){
      cout << x;
    }
    else if(y==z){
        cout << y;
    }
    else{ cout << z;}
    return 0;
}

