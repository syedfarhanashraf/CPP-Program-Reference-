
    // Create class called BankAccount
    // Use typical info about bank accounts to design attributes, such as the account number, the owner name, and the available funds.
    // Specify access so that member data are protected from other parts of the program.
    // Create accessor and mutator functions for member data.

#include <string>
#include <iostream>

class BankAccount{
    public:
        BankAccount(int const &acc_num, std::string const &name, float fund):account_number(acc_num), owner_name(name), available_funds(fund){}
        int account_num() const{
            return account_number;
        }
        std::string owner() const{
            return owner_name;
        }
        float fund() const{
            return available_funds;
        }
    private:
        int const account_number;
        std::string const owner_name;
        float available_funds{0.2F};
};

int main(){
    BankAccount bank_account(9834321, "Parikshit Dubey", 14632.12);
    std::cout << "The account number associated with customer: " << bank_account.owner() << " has the number : " << bank_account.account_num()
              << " and the funds available in the account are: " << bank_account.fund() << "\n";
}