#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double price;
    double discount;
    cin >> price >> discount;
    price = (price * (discount / 10.0));
    price = (price + 5) / 10;
    price = (int) price * 10;
    cout << price;
    return 0;
}