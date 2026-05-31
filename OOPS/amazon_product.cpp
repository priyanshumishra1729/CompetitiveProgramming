#include<bits/stdc++.h>
using namespace std;

class Product {
  public:
    string name; 
    double price;
    float rating;
    int stock;

    void showDetails() {
        cout << "Product Name is: " << name << '\n';
        cout << "Price (in Rupees) is: " << price << '\n';
        cout << "Rating is: " << rating << '\n';
        cout << "Stock is: " << stock << '\n';
    }

    void addToCart() {
        if (stock > 0) {
            cout << name << "add to cart." << '\n';
        }
        else {
            cout << name << "is out of stock." << '\n';
        }
    }
};

int main() {
    Product p1; 
    p1.name = "Wireless Earpods";
    p1.price = 1499;
    
}