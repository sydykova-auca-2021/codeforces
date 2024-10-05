#include <iostream>
#include <string>

using namespace std;

int main() {
    string x;
    cin >> x;

    // Remove leading zeros but keep at least one if the number starts with a decimal point
    int non_zero_pos = 0;
    while (non_zero_pos < x.size() && (x[non_zero_pos] == '0' || x[non_zero_pos] == '.')) {
        non_zero_pos++;
    }

    // Special case: if the input is something like ".100", we don't remove leading zeros
    if (non_zero_pos > 0 && x[non_zero_pos - 1] == '.') {
        non_zero_pos--;
    }
    x = x.substr(non_zero_pos);  // Remove leading zeros

    // Remove trailing zeros after the decimal point
    size_t decimal_pos = x.find('.');
    if (decimal_pos != string::npos) {
        // Remove trailing zeros after decimal point
        while (x.back() == '0') {
            x.pop_back();
        }
        // If the decimal point is at the end, remove it
        if (x.back() == '.') {
            x.pop_back();
            decimal_pos = string::npos;  // Treat it as no decimal point
        }
    }

    // If the number contains only zeros (e.g., "0" or "000"), print "0" directly
    if (x.empty()) {
        cout << "0" << endl;
        return 0;
    }

    // If there is no decimal point, it's an integer
    if (decimal_pos == string::npos) {
        // Shift exponent based on how many places decimal point would move
        int exponent = x.size() - 1;
        if (x.size() == 1) {
            cout << x << endl;  // No need for exponent
        } else {
            cout << x[0] << "." << x.substr(1) << "E" << exponent << endl;
        }
    } else {
        // There is a decimal point, handle fractional parts
        int exponent = decimal_pos;
        if (x[0] == '.') {
            // Case like ".100"
            int first_non_zero = 1;
            while (first_non_zero < x.size() && x[first_non_zero] == '0') {
                first_non_zero++;
            }
            exponent = -(first_non_zero - 1);  // Adjust exponent for decimals
            cout << x[first_non_zero] << (first_non_zero + 1 < x.size() ? "." + x.substr(first_non_zero + 1) : "") << "E" << exponent << endl;
        } else {
            // Regular case with a decimal point in between
            x.erase(decimal_pos, 1);  // Remove the decimal point
            exponent = decimal_pos - 1;
            if (x.size() == 1) {
                cout << x << endl;
            } else {
                cout << x[0] << "." << x.substr(1) << "E" << exponent << endl;
            }
        }
    }

    return 0;
}
