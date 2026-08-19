#include <iostream>
#include <string>




int main()
{
    std::string string_to_guess = "aboba";
    // init string made of '_', size of this string equal to string_to_guess size
    std::string string_to_play(string_to_guess.size(), '_');
    int attempts = 6;
    char user_choice = ' ';
    while(attempts > 0)
    {
        // get user input
        std::cin >> user_choice;
        // notice that there can be two or more same chars in string, you should open them all
        for(size_t i = 0; i < string_to_guess.size(); ++i)
        {
            // something here
        }
    }

    return 0;
}