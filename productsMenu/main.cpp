#include <iostream>
#include <string>
#include <cctype>
using namespace std;
/*
Next you are going to all the end user to enter three products from the console.
Prompt the user as follows:
Enter product id:
Enter product name:
Enter product price:
Next you are going to design three functions.
The first function viewProducts will take in the array and the size of the array.  This function print out:
The product id followed by a space
The product name followed by a space
The product price and a new line
Call the viewProducts function from your main function.
The second function will calculate the average price of the products in the array.
Send in the size of the array and the array of products.
This function will return the average price.  Call the average function from your main function.
Print out the average price returned to the console.
The last function will print out all the product prices whose name contains a lowercase e or an uppercase E.
*/
struct Product
{
    int id;
    string name;
    double price;
};

double averageprice(Product allProducts[], const int numProducts);
void viewProducts(Product allProducts[], const int numProducts);
void productsWLettere(Product allProducts[],const int numProducts);

int main()
{
    Product data;
    const int numProducts = 3;
    Product allProducts[numProducts];
    for(int i = 0; i < numProducts; i++)
    {
    cout << "Enter product id:" << endl;
    cin >> allProducts[i].id;
    cout << "Enter product name:" << endl;
    cin.ignore();
    getline(cin, allProducts[i].name);
    cout << "Enter product price:" << endl;
    cin >> allProducts[i].price;
    }
    int testing;
    cin >> testing;
    if(testing == 1)
      {
        viewProducts(allProducts, numProducts);
      }
    else if(testing ==2)
     {
        averageprice(allProducts,  numProducts);
     }
    else if(testing == 3)
     {

        productsWLettere(allProducts, numProducts);
     }
    return 0;
}

void viewProducts(Product allProducts[], const int numProducts = 3)
{
    for(int i = 0; i < numProducts; i++)
    {
        cout << allProducts[i].id << " " << allProducts[i].name;
        cout << " " << allProducts[i].price << endl;
    }
}

double averageprice(Product allProducts[], const int numProducts = 3)
{
    double average = (allProducts[0].price + allProducts[1].price + allProducts[2].price) / numProducts;
    cout << average << endl;

}

void productsWLettere(Product allProducts[], const int numProducts = 3)
{
    for(int i = 0; i < numProducts; i++)
    {
        for(int j = 0; j < allProducts[i].name.length(); j++)
        {
            if( allProducts[i].name[j] == 'e' || allProducts[i].name[j] == 'E')
            {
                cout << allProducts[i].price << endl;
                break;
            }
        }
    }
}





