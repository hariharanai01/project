#include <iostream>
using namespace std;

class productcount
{

private:
    int productprice;

public:

    productcount()
    {

        cout << "Enter the product name";
        string name;
        cin >> name;
        cout << "this is my product" << name;
    }
    void setproductprice(int a)
    {
        productprice=a;

    }
    int getproductprice()
    {
        return productprice;
    }
    int getproductprice01()
    {
        cout << productprice;
    }
    void setproductprice02()
    {
        cout << productprice;
    }
};

int main()
{
    productcount pc;
    pc.setproductprice(500);
    pc.getproductprice();
    cout << pc.getproductprice() << endl;
    pc.getproductprice01();
    pc.setproductprice02();
    return 0;
}
