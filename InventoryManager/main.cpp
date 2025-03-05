//
//  main.cpp
//  InventoryManager
//
//  Created by Jonathan Flores on 3/1/25.
//

#include <iostream>

using namespace std;

class Item {
private:
    string name;
    double price;
    int stock;
    
public:
    Item(string itemName, double itemPrice, int itemStock){
        name = itemName;
        price = itemPrice;
        stock = itemStock;
    }
    
    void addStock(int quantity){
        stock += quantity;
        cout << quantity << " item(s) added. New stock: " << stock << endl;
    }
    
    void displayItem(){
        cout << "Item: " << name << "\nPrice: $" << price << "\nStock: " << stock << endl;
    }
};

int main() {
    Item apple("Apple", 0.99, 10);
    apple.displayItem();
    apple.addStock(10);
    apple.displayItem();
    return 0;
}
