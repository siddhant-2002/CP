class Solution {
    string binary(int num){
        if(num == 0){
            return "";
        }
        return binary(num/2 ) + to_string(num%2);

    }
    int binaryToNum(string& binary) {
    int num = 0;
    long long base = 1; // 2^0

    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            num += base;
        }
        base *= 2;
    }

    return num;
}
public:
    int findComplement(int num) {
        if (num == 0) return 1; // Special case for 0

        // Convert number to binary
        std::string binaryStr = binary(num);

        // Flip the bits
        for (char& c : binaryStr) {
            c = (c == '0') ? '1' : '0';
        }

        // Convert the flipped binary string back to a decimal number
        return binaryToNum(binaryStr);
    }
};