//problem 1
/*
#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x>=0){
        cout << "Positive" << endl;
    }

    else{
        cout << "Negative" << endl;
    }
    return 0;
}
*/

//problem 2
/*
#include <iostream>
using namespace std;
int main() {
    float x;
    cin >> x;
    if  (x>=0 && int(x/2)==(x/2)) {
        cout << "The number is positive and even" << endl;
    }

    else if (x>=0 && int(x/2)!=(x/2)) {
        cout << "The number is positive and odd" << endl;
    }

    else if  (x<0 && int(x/2)==(x/2)) {
        cout << "The number is negative and even" << endl;
    }

    else {
        cout << "The number is negative and odd" << endl;
    }
    return 0;
}
*/

//problem 3
/*
#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    cin >> x >> y >> z;
    if (x<=y && y<z) {
        cout << z << " is the largest" << endl;
    }

    else if (y<=x && x<z) {
        cout << z << " is the largest" << endl;
    }

    else if (z<=x && x<y) {
        cout << y << " is the largest" << endl;
    }

    else if (x<=z && z<y) {
        cout << y << " is the largest" << endl;
    }

    else if (z<=y && y<x) {
        cout << x << " is the largest" << endl;
    }

    else {
        cout << x << " is the largest" << endl;
    }
    return 0;
}
*/

//problem 4
/*
#include <iostream>
using namespace std;
int main() {
    int x,y;
    cin >> x >> y;
    if (int(x/float(y))==(x/float(y))) {
        cout << x << " is divisible by " << y << endl;
    }

    else {
        cout << x << " is not divisible by " << y << endl;
    }
    return 0;
}
*/

//problem 5
/*
#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (int(x/400.0)==x/400.0) {
        cout << x << " is a leap year" << endl;
    }

    else {
        cout << x << " is not a leap year" << endl;
    }
}
*/

//problem 6
/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c,d;
    cin >> a >> b >> c;
    d=b*b-4*a*c;
    cout << "x1=" << (-b+sqrt(d))/(2*a) << endl;
    cout << "x2=" << (-b-sqrt(d))/(2*a) << endl;
    return 0;
}
*/

//problem 7
/*
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a+b==c) {
        cout << "The triangle is valid" << endl;
    }

    else if (a+c==b) {
        cout << "The triangle is valid" << endl;
    }

    else if (c+b==a) {
        cout << "The triangle is valid" << endl;
    }

    else {
        cout  << "The triangle is not valid" << endl;
    }
}
*/

//problem 8
/*
#include <iostream>
using namespace std;
int main() {
    char x;
    cin >> x;
    if (int(x)>=65 && int(x)<=90) {
        cout << "Uppercase alphabet" << endl;
    }

    else if (int(x)>=97 && int(x)<=122) {
        cout << "Lowercase alphabet" << endl;
    }

    else {
        cout << "It is not an alphabet" << endl;
    }
    return 0;
}
*/

//problem 9
/*
#include <iostream>
using namespace std;
int main() {
    int x,y;
    cin >> x >> y;
    if (x*x+y*y<=100) {
        cout << "Point " << "(" << x << "," << y << ") " << "is in circle" << endl;
    }

    else {
        cout << "Point " << "(" << x << "," << y << ") " << "is not in circle" << endl;
    }
    return 0;
}
*/

//problem 10
/*
#include <iostream>
using namespace std;
int main() {
    float x,y,z,l;
    cout << "Enter weight and price for package 1: ";
    cin >> x >> y;
    cout << "Enter weight and price for package 2: ";
    cin >> z >> l;
    if ((x/y)<(z/l)) {
        cout << "Package 2 has a better price" << endl;
    }

    else if ((x/y)>(z/l)) {
        cout << "Package 1 has a better price" << endl;
    }

    else {
        cout << "Two package have the same price" << endl;
    }
    return 0;
}
*/