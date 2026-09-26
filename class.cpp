#include<iostream>
#include<string>
using namespace std;

class Product
{
private:
    string product_ID;
    string product_name;
    float product_price;
    int product_quantity;
    float monthly_sales[12];

public:

    Product()
    {
        for(int i=0;i<12;i++)
        {
            monthly_sales[i] = 0.0;
        }
    }

    void GetInfo()
    {
        cout << "Enter product ID: ";
        cin >> product_ID;  
        cout << "Enter product name: ";
        cin >> product_name;    
        cout << "Enter product price: ";
        cin >> product_price;
        cout << "Enter product quantity: ";
        cin >> product_quantity;    
        cout << "Enter monthly sales for 12 months: ";

        for(int i = 0; i < 12; i++)
        {
            cin>>monthly_sales[i];
        }
    }

    float bill()
    {
        float total_sales = 0.0;
        for(int i=0;i<12;i++)
        {
            total_sales += monthly_sales[i];
        }
        return total_sales;
    }

    void display()
    {
        cout << "Product ID: " << product_ID << endl;
        cout << "Product Name: " << product_name << endl;
        cout << "Product Price: " << product_price << endl;
        cout << "Product Quantity: " << product_quantity << endl;
        cout << "Monthly Sales: ";

        for(int i=0;i<12;i++)
        {
            cout << monthly_sales[i] << " ";
        }
            cout << endl;
            cout << "Total Sales: " << bill() << endl;
    }
};

int main()
{
    Product p[10];
    int n;
    cout << "Enter number of products: ";
    cin>> n;

    for(int i=0;i<n;i++)
    {
        cout << "Enter details for product " << i+1 << endl;
        p[i].GetInfo();
    }

    cout << "==================" << endl;
    cout << "Product Details:" << endl;
    cout << "==================" << endl;

    for(int i=0;i<n;i++)
    {
        cout << "Product " << i+1 << endl;
        p[i].display();
    }
    return 0;
}