#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Generate a random number between 0 and 11 for days until expiration
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    
    // Output message based on days until expiration
    if (daysUntilExpiration <= 10) {
        if (daysUntilExpiration <= 5) {
            if (daysUntilExpiration == 1) {
                cout << "Your subscription expires within a day!" << endl
                     << "Renew now and save 20%!" << endl;
            } else {
                cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl
                     << "Renew now and save 10%!" << endl;
            }
        } else {
            cout << "Your subscription will expire soon. Renew now!" << endl;
        }
    } else if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired." << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
