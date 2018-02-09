//
// Created by Silvan Herrema on 26/01/2018.
//

#include "Hangman.h"
#include <iostream>

Hangman::Hangman(std::string word){

}

bool Hangman::GuessLetter(char c){
    return false;
}

void Hangman::DrawHangman(){

}

void Hangman::DrawGuessedLetters(){

}

void Hangman::DrawGuessedWord(){

}

void Hangman::AddError(){

}
bool Hangman::IsCorrect(){
    return false;
}

char Hangman::GetInput() {
    char c;
    std::cin >> c;
    return c;
}