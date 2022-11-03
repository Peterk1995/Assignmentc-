#include <iostream>
#include <string>
using namespace std;
                  
class Employee {
 private:
    std::string firstName;
    std::string lastName;
    std::string middleName;
    std::string salutation;
                  
 public:
    Employee(std::string, std::string, std::string, std::string);
                  
    // SETTERS
    void setFirstName(std::string);
    void setLastName(std::string);
    void setMiddleName(std::string);
    void setSalutation(std::string);
                  
    // GETTERS
    std::string getFirstName();
    std::string getLastName();
    std::string getMiddleName();
    std::string getSalutation();
                  

                  
    void showEmployee();
};
                  
Employee::Employee(std::string fName, std::string lName, std::string mname, std::string salutation) {
    setFirstName(fName);
    setLastName(lName);
    setMiddleName(mname);
    setSalutation(salutation);

}
                  
// SETTERS
void Employee::setFirstName(std::string fName) { firstName = fName; }
void Employee::setLastName(std::string lName) { lastName = lName; }
void Employee::setMiddleName(std::string mname) { middleName = mname; }
void Employee::setSalutation(std::string saluation) { salutation = salutation; }

// GETTERS
std::string Employee::getFirstName() { return firstName; }
std::string Employee::getLastName() { return lastName; }
std::string Employee::getMiddleName() { return middleName; }
std::string Employee::getSalutation() { return salutation; }


void Employee::showEmployee() {
    std::cout << "Name: " << getFirstName() << "\n Last name: " << getLastName() << "\n";
    std::cout << "middlename: " << getMiddleName() << "salutation: " << getSalutation();
    std::cout << std::endl;
}
                  
                  
int main(int argc, const char *argv[]) {
    Employee emp1("Louis", "Johnson", "wee", "Johnny");
                  
    emp1.showEmployee();

    return 0;
}