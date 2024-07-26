#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int number = 20;
    bitset<32> binary(number); // Using 32 bits to represent the number
    cout << binary.to_string() << endl; // Converts to binary string

    // To remove leading zeros, find the first '1' and create a substring from there
    string binaryStr = binary.to_string();
    cout << binaryStr.substr(binaryStr.find('1')) << endl;

    return 0;
}