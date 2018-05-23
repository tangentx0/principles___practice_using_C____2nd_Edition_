#include "std_lib_facilities.h"

// simple dictionary: list of sorted words:
//make sure to press return after entering the list, then use ctrl (cmd) D to enter end of file (EOF) command
int main()
{
    vector<string> words;
    string temp;                        //set a string to use as a temporary buffer
    while (cin>>temp)                   //read whitespace separated words
        words.push_back(temp);          //put into vector array

    cout << "Number of words: " << words.size() << endl;        //print number of words to console

    sort(words.begin(),words.end());        //sort words in vector array "from beginning to end"

    for (int i = 0; i< words.size(); ++i)   //loop for each vector array index number
        if (i==0 || words[i-1]!=words[i])   //check if first word and that it is a new word
            cout << words[i] << "\n";       //output the list of words in the vector array in sorted order
}