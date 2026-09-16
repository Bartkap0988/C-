#include <iostream>
#include <string>

int main() {
    std::string ciphertext = "UDMHUHCHUHBH";
    std::string plaintext = "";

    for (char c : ciphertext) {
        // Shift the character back by 1
        plaintext += (c - 1);
    }

    std::cout << plaintext << std::endl;
    return 0;
}
