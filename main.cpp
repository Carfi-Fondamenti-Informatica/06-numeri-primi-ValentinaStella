#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int n;
    cin>>n;

    primo(n) ? cout<< "numero primo\n" : cout<<"numero non primo\n";

    return 0;
}
