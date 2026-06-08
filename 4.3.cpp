#include <iostream>
using namespace std;

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default Constructor
    Inventory()
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }

    // Parameterized Constructor
    Inventory(int i, int q, double c)
    {
        itemNumber = i;
        quantity = q;
        cost = c;
        setTotalCost();
    }

    // Setters
    void setItemNumber(int i)
    {
        if (i >= 0)
            itemNumber = i;
    }

    void setQuantity(int q)
    {
        if (q >= 0)
            quantity = q;
    }

    void setCost(double c)
    {
        if (c >= 0)
            cost = c;
    }

    void setTotalCost()
    {
        totalCost = quantity * cost;
    }

    // Getters
    int getItemNumber()
    {
        return itemNumber;
    }

    int getQuantity()
    {
        return quantity;
    }

    double getCost()
    {
        return cost;
    }

    double getTotalCost()
    {
        return totalCost;
    }
};

int main()
{
    int itemNo, qty;
    double cost;

    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Quantity: ";
    cin >> qty;

    cout << "Enter Cost: ";
    cin >> cost;

    Inventory item(itemNo, qty, cost);

    cout << "\nInventory Details" << endl;
    cout << "Item Number: " << item.getItemNumber() << endl;
    cout << "Quantity: " << item.getQuantity() << endl;
    cout << "Cost: " << item.getCost() << endl;
    cout << "Total Cost: " << item.getTotalCost() << endl;

    return 0;
}