#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#pragma warning(disable : 4996)

using namespace std;

string readFile(string path) {
    string s;
    getline(ifstream(path), s, '\0');
    return s;
}

int count(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != ' ')
        {
            int j;
            for (j = i; j < s.size() && s.at(j) != ' '; j++);

            if (j - i >= 1)
                count++;

            i = j;
        }
    }
    return count;
}

int main()
{
    string filename = "t.txt";
    string fileContent = readFile(filename);
    int result = count(fileContent);
    cout << "words in txt: " << result << endl;
    return 0;

}