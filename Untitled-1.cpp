#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    if (text == "")
    {
        cout << "Error: you must enter something." << endl;
        return 0;
    }

    cout << endl;
    cout << "1 - Remove vowels" << endl;
    cout << "2 - Show only vowels" << endl;
    cout << "3 - Remove consonants" << endl;
    cout << "4 - Show only consonants" << endl;

    int option;
    cout << "Choose option: ";
    cin >> option;

    if (cin.fail())
    {
        cout << "Invalid input!" << endl;
        return 0;
    }

    string result = "";

    // go through every character
    for (int i = 0; i < text.length(); i++)
    {
        char c = text[i];

        // check manually if vowel
        bool vowel = false;

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vowel = true;
        }

        if (option == 1)   // remove vowels
        {
            if (vowel == false)
            {
                result = result + c;
            }
        }
        else if (option == 2)   // only vowels
        {
            if (vowel == true)
            {
                result = result + c;
            }
        }
        else if (option == 3)   // remove consonants
        {
            if (vowel == true)
            {
                result = result + c;
            }
        }
        else if (option == 4)   // only consonants
        {
            if (vowel == false)
            {
                result = result + c;
            }
        }
        else
        {
            cout << "Wrong option selected." << endl;
            return 0;
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}
