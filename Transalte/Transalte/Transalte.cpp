#include <iostream>
#include <string>

using namespace std;

#pragma region variables
int selectedLang = 0;
int selectedWord = 0;

string  yellow = "yellow", blue = "blue", red = "red", green = "green", white = "white", black = "black", orange = "orange", brown = "brown", purple = "purple";
string  jaune = "jaune", bleu = "bleu", rouge = "rouge", vert = "vert", blanc = "blanc", noir = "noir", marron = "marron", violet = "violet";

#pragma endregion

#pragma region menu
/// <summary>
/// Show menu where you select the language
/// </summary>
void ChooseLanguage()
{
    int _lang = 0;
    cout << "Choose your language to translate: \n"
        << "[1] Francais -> Anglais \n"
        << "[2] English -> French\n"
        << "Choice number of language: ";
    cin >> _lang;

    //vérification de l'entré utilisateur
    while (_lang > 2 || _lang < 1) {
        cout << "Invalid number";
        cin >> _lang;
    }
    selectedLang = _lang;
}
/// <summary>
/// French menu
/// </summary>
void ShowMenuFr()
{
    cout << "[1] Jaune \n"
        << "[2] Bleu \n"
        << "[3] Rouge \n"
        << "[4] Vert \n"
        << "[5] Blanc \n"
        << "[6] Noir \n"
        << "[7] Orange \n"
        << "[8] Marron \n"
        << "[9] Violet \n"
        << "Choisir le mot (numéro) à traduire: ";

    int _word;
    //vérification de l'entré utilisateur
    cin >> _word;
    while (_word > 9 || _word < 1) {
        cout << "\nInvalid number\n Retry: ";
        cin >> _word;
    }
    selectedWord = _word;
}

/// <summary>
/// English menu
/// </summary>
void ShowMenuEn()
{
    cout << "[1] Yellow \n"
        << "[2] Blue \n"
        << "[3] Red \n"
        << "[4] Green \n"
        << "[5] White \n"
        << "[6] Black \n"
        << "[7] Orange \n"
        << "[8] Brown \n"
        << "[9] Purple \n"
        << "Choose the word (number) to translate: ";

    int _word;
    //vérification de l'entré utilisateur
    cin >> _word;
    while (_word > 9 || _word < 1) {
        cout << "\nInvalid number\n Retry: ";
        cin >> _word;
    }
    selectedWord = _word;
}
#pragma endregion

#pragma region word selection
/// <summary>
/// Methode to get the word translated
/// </summary>
/// <param name="_lang">language selected</param>
/// <param name="_word">word selected</param>
/// <returns>the word translated</returns>
string WordSelected(int _lang, int _word) {

    string _returnWord;

    //dans le cas du francais
    if (_lang == 1) {
        if (_word == 1) {
            _returnWord = yellow;
        }
        else if (_word == 2) {
            _returnWord = blue;
        }
        else if (_word == 3) {
            _returnWord = red;
        }
        else if (_word == 4) {
            _returnWord = green;
        }
        else if (_word == 5) {
            _returnWord = white;
        }
        else if (_word == 6) {
            _returnWord = black;
        }
        else if (_word == 7) {
            _returnWord = orange;
        }
        else if (_word == 8) {
            _returnWord = brown;
        }
        else if (_word == 9) {
            _returnWord = purple;
        }
        return "Le mot est: " + _returnWord;
    }
    //cas de l'anglais
    else if (_lang == 2) {
        if (_word == 1) {
            _returnWord = jaune;
        }
        else if (_word == 2) {
            _returnWord = bleu;
        }
        else if (_word == 3) {
            _returnWord = rouge;
        }
        else if (_word == 4) {
            _returnWord = vert;
        }
        else if (_word == 5) {
            _returnWord = blanc;
        }
        else if (_word == 6) {
            _returnWord = noir;
        }
        else if (_word == 7) {
            _returnWord = orange;
        }
        else if (_word == 8) {
            _returnWord = marron;
        }
        else if (_word == 9) {
            _returnWord = violet;
        }
        return "The word is: " + _returnWord;
    }
}
#pragma endregion

int main()
{
    ChooseLanguage();
    if (selectedLang == 1) { ShowMenuFr(); }
    if (selectedLang == 2) { ShowMenuEn(); }
    cout << WordSelected(selectedLang, selectedWord);
}
