#include <iostream>
#include <sstream>
	
int main() {
    double customerPurchaseAmount;
    double customerDiscount = 0.0;
    double totalPayment;

    std::string input;

    std::cout << "Enter the purchase amount in Naira(₦): ";
    std::getline(std::cin, input);

    std::istringstream iss(input);



    if (!(iss >> customerPurchaseAmount)) {
        std::cout << "Oops, Please enter your purchase amount." << std::endl;
        return 0;
        // Here, if the customer input an alphabet instead of a number, the customer will receive a message that they should input there purchase amount//
    }

    if (customerPurchaseAmount >= 200000 && customerPurchaseAmount <= 1000000) {
        customerDiscount = 0.03;
        // Here, if the amount purchased of the customer is between ₦200,000 and ₦1,000,000, they’ll get a       discount of 3% //
    } else if (customerPurchaseAmount > 1000000) {
        customerDiscount = 0.07;
// Here, if the amount purchased of the customer is above ₦1,000,000, they’ll get a discount of 7% //
    }

     //Here, Is just the algorithm we will use to calculate the Total payment//
    totalPayment = customerPurchaseAmount - (customerPurchaseAmount * customerDiscount);


    std::cout << "Total payment: ₦" << totalPayment << std::endl;

    return 0;
}
