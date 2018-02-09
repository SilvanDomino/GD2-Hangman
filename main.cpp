#include <iostream>
#include "Hangman.h"

int main() {

    Hangman hangman = Hangman("tidepod");

    while(!hangman.IsCorrect()){
        //Gameloop
        hangman.DrawHangman();
        hangman.DrawGuessedWord();
        hangman.DrawGuessedLetters();

        //input and input handling
        char input = hangman.GetInput();
        if(hangman.GuessLetter(input)){
            std::cout << "Correct! letter\n";
        } else {
            hangman.AddError();
        }
    }
    std::cout << "Congratulations, you've found the world!\n";
    return 0;
}