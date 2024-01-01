#include <iostream>
#include <cmath>
#include <cctype> // Include the cctype header for tolower function
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        string encryptedMessage;
        string decryptedMessage;
        
        cin >> encryptedMessage; // Read input string
        
        for (int i = 0; i < encryptedMessage.length(); i++)
        {
            if (i + 2 < encryptedMessage.length() && encryptedMessage[i + 2] == '&')
            {
                int num = stoi(encryptedMessage.substr(i, 2)); // read two characters as a number
                if (num >= 10 && num <= 26) {
                    decryptedMessage += static_cast<char>(num + 64 + 32); // Convert to lower case
                } else {
                    // Handle invalid input or out-of-range case
                    cout << "Invalid input detected!" << endl;
                    return 1; // Exit with an error code
                }
                i += 2;
            }
            else
            {
                int num = stoi(encryptedMessage.substr(i, 1));
                if (num >= 1 && num <= 9) {
                    decryptedMessage += static_cast<char>(num + 64 + 32); // Convert to lower case
                } else {
                    // Handle invalid input or out-of-range case
                    cout << "Invalid input detected!" << endl;
                    return 1; // Exit with an error code
                }
            }
        }
        
        cout << decryptedMessage << endl;
    }

    return 0;
}
