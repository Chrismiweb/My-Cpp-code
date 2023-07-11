#include <iostream>
#include <sstream>

int main() {
    while (true) {
        double customerPurchaseAmount;
        double customerDiscount = 0.0;
        double totalPayment;

        std::string input;

        std::cout << "Enter the purchase amount in Naira(₦) (or 'C' to cancel): ";
        std::getline(std::cin, input);



//Here, this code enable customer cancel transaction once the user type C//
        if (input == "c" || input == "C") {
            std::cout << "Thanks for the patronage. Goodbye!" << std::endl;
            break;
        }

        std::istringstream iss(input);

        if (!(iss >> customerPurchaseAmount)) {
            std::cout << "Oops, please enter a valid purchase amount." << std::endl;
            continue;
        }

        if (customerPurchaseAmount >= 200000 && customerPurchaseAmount <= 1000000) {
            customerDiscount = 0.03;
        } else if (customerPurchaseAmount > 1000000) {
            customerDiscount = 0.07;
        }

        totalPayment = customerPurchaseAmount - (customerPurchaseAmount * customerDiscount);
        std::cout << "Total payment: ₦" << totalPayment << std::endl;
    }

    return 0;
}
