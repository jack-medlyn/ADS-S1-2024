#include <iostream>
using namespace std;

int recursive_func(int n) {
    if (n == 0) 
        return 0;

    return recursive_func(n - 1) + pow(n, 2);
}

int recursive_func2(int n) {
    if (n == 0) 
        return 0;
    if (n == 1) 
        return 1;

    return recursive_func2(n - 1) * recursive_func2(n - 2);
}

int sum(int n) {
    static int acc = 1;
    if (n==1)
        return acc;

    acc = acc + n;
    return sum(n - 1);
}




int main(){
    cout << recursive_func(5) << endl;
    cout << recursive_func2(3) << endl;
    cout << sum(6) << endl;
    cout << sum(6) << endl;


    return 0;
}

