#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;
    
    // Read the number of stones
    std::cin >> n;
    
    // Read the string representing the colors of the stones
    std::cin >> s;
    
    // Initialize the counter for the number of stones to be removed
    int removals = 0;
    
    // Iterate through the stones from the second stone to the last stone
    for (int i = 1; i < n; ++i) {
        // Compare each stone with the previous one
        if (s[i] == s[i - 1]) {
            // If they are the same, increment the removal counter
            ++removals;
        }
    }
    
    // Print the result
    std::cout << removals << std::endl;
    
    return 0;
}
