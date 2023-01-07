#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> caesar_cipher = {{"a", "b"}, {"b", "c"}, {"c", "d"}, {"d", "e"}, {"e", "f"}, {"f", "g"}, {"g", "h"}, {"h", "i"}, {"i", "j"}, {"j", "k"}, {"k", "l"}, {"l", "m"}, {"m", "n"}, {"n", "o"}, {"o", "p"}, {"p", "q"}, {"q", "r"}, {"r", "s"}, {"s", "t"}, {"t", "u"}, {"u", "v"}, {"v", "w"}, {"w", "x"}, {"x", "y"}, {"y", "z"}, {"z", "a"}};

    string text;
    cout << "Enter text: ";
    cin >> text;
    

    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        result += caesar_cipher[text.substr(i, 1)];
    }

    cout << "Decrypted Text: " << result << endl;

    return 0;
}
