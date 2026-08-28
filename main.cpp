#include <iostream>
#include <string>




int main()
{
    std::string string_to_guess = "aboba";
    // init string made of '_', size of this string equal to string_to_guess size
    std::string string_to_play(string_to_guess.size(), '_');
    int attempts = 6;
    char user_choice = ' ';
    bool is_correct = false;
    while(attempts > 0)
    {
        // get user input
        std::cin >> user_choice;
        // notice that there can be two or more same chars in string, you should open them all
        for(size_t i = 0; i < string_to_guess.size(); ++i)
        {
            if(user_choice == string_to_guess[i])
            {
                string_to_play[i] = user_choice;
                if(string_to_play == string_to_guess)
                {
                    std::cout << "You won!\n";
                }
                is_correct = true;
            }
        }
        if(!is_correct)
        {
            attempts--;
            std::cout << "No such letter. Attempts: " << attempts << '\n';
        }
        else
        {
            std::cout << string_to_play << '\n';
        }
        is_correct = false;
    }
    std::cout << "You lost, word was: " << string_to_guess << '\n';

    return 0;
}