#include <string>
#include <iostream>

using namespace std;

string dots = "...";


string trim(string phrase, size_t size) {
    string NewPhrase;
    if (phrase.length() >= size) //trim et ...
    {
        for (int i = 0; i < (size-dots.length()); i++)
        {
            NewPhrase += phrase[i];
        }
        NewPhrase.append(dots);
        return NewPhrase;
    }

    if (phrase.length() < size)
    {
        return phrase;
    }
    if (size <= 3) // H... return phrase jusquau size
    {
        for (int i = 0; i < size; i++)
        {
            NewPhrase += phrase[i];
        }
        NewPhrase.append(dots);
        return NewPhrase;
    }
}

void main(void)
{
    cout << trim("Creating kata is fun", 14);

}