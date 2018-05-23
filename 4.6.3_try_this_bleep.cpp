#include "std_lib_facilities.h"

//censor-bot
//make sure to press return after entering the list, then use ctrl (cmd) D to enter end of file (EOF) command
int main()
{
    vector<string> words;       //initialize string vector called 'words'
    string temp;                //initialize string 'temp' for collecting words

    while (cin>>temp)           //begin loop to collect words into 'temp'
        words.push_back(temp);      //add words from 'temp' string into 'words' vector array, at the end

    vector<string> disliked_words;      //initialize vector array 'disliked_words'
    disliked_words.push_back("broccoli");       //add words to the end of the vector
    disliked_words.push_back("chewbacca");
    disliked_words.push_back("eggplant");

    for (int i = 0; i<words.size(); ++i) {      //begin for loop to go through each word from 'words' vector array
        bool is_disliked = false;       //define new bool to denote banned or allowed words

        for (int j =0; j<disliked_words.size(); ++j) {      //begin loop to check each word against banned word array
            if (disliked_words[j] == words[i]) is_disliked = true;      //change to tru if banned
        }
        if (is_disliked)
            cout << "BLEEP ";

        else
            cout << words[i] << ' ';

    }

    cout << '\n';
}