#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Product {
    int id;
    string name;
    double price;
    int quantity;
};

vector<Product> inventory;
int nextId = 1;

void addProduct() {
    Product p;
    p.id = nextId++;
    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, p.name);
    cout << "Enter Price: ";
    cin >> p.price;
    cout << "Enter Quantity: ";
    cin >> p.quantity;
    inventory.push_back(p);
    cout << "Product Added Successfully" << endl;
}

void displayProducts() {
    if(inventory.empty()) {
        cout << "Inventory is Empty" << endl;
        return;
    }
    cout << "\n--- Inventory List ---" << endl;
    for(const auto& p : inventory) {
        cout << "ID: " << p.id 
             <<"Name: " << p.name 
             <<"Price: " << p.price 
             <<"Quantity: " << p.quantity << endl;
    }
}

void searchProduct() {
    if(inventory.empty()) {
        cout << "Inventory is Empty" << endl;
        return;
    }
    string name;
    cout << "Enter Product Name to Search: ";
    cin.ignore();
    getline(cin, name);
    bool found = false;
    for(const auto& p : inventory) {
        if(p.name == name) {
            cout << "Product Found - ID: " << p.id 
                 <<"Name: " << p.name 
                 <<"Price: " << p.price 
                 <<"Quantity: " << p.quantity << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Product Not Found" << endl;
}

void updateProduct() {
    if(inventory.empty()) {
        cout << "Inventory is Empty" << endl;
        return;
    }
    int id;
    cout << "Enter Product ID to Update: ";
    cin >> id;
    for(auto& p : inventory) {
        if(p.id == id) {
            cout << "Enter New Name: ";
            cin.ignore();
            getline(cin, p.name);
            cout << "Enter New Price: ";
            cin >> p.price;
            cout << "Enter New Quantity: ";
            cin >> p.quantity;
            cout << "Product Updated Successfully" << endl;
            return;
        }
    }
    cout << "Product Not Found" << endl;
}

void deleteProduct() {
    if(inventory.empty()) {
        cout << "Inventory is Empty" << endl;
        return;
    }
    int id;
    cout << "Enter Product ID to Delete: ";
    cin >> id;
    for(size_t i = 0; i < inventory.size(); i++) {
        if(inventory[i].id == id) {
            inventory.erase(inventory.begin() + i);
            cout << "Product Deleted Successfully" << endl;
            return;
        }
    }
    cout << "Product Not Found" << endl;
}

void buyStock() {
    if(inventory.empty()) {
        cout << "Inventory is Empty" << endl;
        return;
    }
    int id, qty;
    cout << "Enter Product ID: ";
    cin >> id;
    cout << "Enter Quantity to Buy: ";
    cin >> qty;
    for(auto& p : inventory) {
        if(p.id == id) {
            p.quantity += qty;
            cout << "Stock Updated Successfully" << endl;
            return;
        }
    }
    cout << "Product Not Found" << endl;
}

void sellProduct() {
    if(inventory.empty()) {
        cout << "Inventory is Empty" << endl;
        return;
    }
    int id, qty;
    cout << "Enter Product ID: ";
    cin >> id;
    cout << "Enter Quantity to Sell: ";
    cin >> qty;
    for(auto& p : inventory) {
        if(p.id == id) {
            if(p.quantity >= qty) {
                p.quantity -= qty;
                cout << "Product Sold Successfully" << endl;
            } else {
                cout << "Insufficient Stock" << endl;
            }
            return;
        }
    }
    cout << "Product Not Found" << endl;
}

void totalInventoryValue() {
    if(inventory.empty()) {
        cout << "Inventory is Empty" << endl;
        return;
    }
    double total = 0;
    for(const auto& p : inventory) {
        total += p.price * p.quantity;
    }
    cout << "Total Inventory Value: " << total << endl;
}

void displayMenu() {
    cout << endl;
    cout << "===== INVENTORY MANAGEMENT SYSTEM =====" << endl;
    cout << "1. Add Product" << endl;
    cout << "2. Display Products" << endl;
    cout << "3. Search Product" << endl;
    cout << "4. Update Product" << endl;
    cout << "5. Delete Product" << endl;
    cout << "6. Buy Stock" << endl;
    cout << "7. Sell Product" << endl;
    cout << "8. Total Inventory Value" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter Choice: ";
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1: addProduct(); break;
            case 2: displayProducts(); break;
            case 3: searchProduct(); break;
            case 4: updateProduct(); break;
            case 5: deleteProduct(); break;
            case 6: buyStock(); break;
            case 7: sellProduct(); break;
            case 8: totalInventoryValue(); break;
            case 9: cout << "Thank You" << endl; break;
            default: cout << "Invalid Choice" << endl;
        }
    } while(choice != 9);

    return 0;
}