

#include <iostream>
using namespace std;

int main()
{
    cout << "enter a line :: ";
    string user_string;
    getline(cin, user_string);
    int vowel = 0;
    int number = 0;
    int consonent = 0;
    for (int i = 0; i < user_string.length(); i++)
    {
        char user_char = user_string[i];
        if (user_char == ' ')
        {
            cout << user_char << endl;
            continue;
        }
        else if (user_char == 'a' || user_char == 'e' || user_char == 'i' || user_char == 'o' || user_char == 'u' || user_char == 'A' || user_char == 'E' || user_char == 'I' || user_char == 'O' || user_char == 'U')
        {
            cout << user_char << endl;
            vowel++;
        }
        else if (user_char >= 'a' && user_char <= 'z' || user_char >= 'A' && user_char <= 'Z')
        {
            consonent++;
        }
        else
        {
            number++;
        }
    }
    cout << "The number of vowels are  ::  " << vowel << endl;
    cout << "The number of consonents are  ::  " << consonent << endl;
    cout << "The number of numbers are  ::  " << number << endl;

    return 0;
}