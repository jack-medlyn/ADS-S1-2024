#include <iostream>
#include <string>
using namespace std;

char iterative(string input){
    for (int i = 0; i < size(input); i++){
        int check = isdigit(input[i]);
        if (check){
            cout << input[i] << endl;
            return input[i];
        }
    }
    return 0;
}

string head(string input){

}

