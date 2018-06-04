#include <string>

class Sales_item
{
public:
    Sales_item(std::string isbn, float perPrice, int nums);
    Sales_item(const Sales_item& src);
    bool operator==(const Sales_item& src);
    Sales_item& operator=(const Sales_item& src);
    ~Sales_item();

    std::string getIsbn() const;
    void setIsbn(std::string isbn);

    int getNums() const;
    void setNums(int nums);
    
    void setPerPrice(float perPrice);
    float getPerPrice() const;
    Sales_item& operator+(const Sales_item& item1, const Sales_item& item2);
protected:
    float computeTotalPrice(const Sales_item& item);

private:
    std::string myIsbn;
    float myPerPrice;
    int myNums;
};

