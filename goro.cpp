#include <iostream>
#include <fstream>
#include <vector>
#include "goro.h"

// Global Main.
int main()
{
    std::fstream fs;
    std::string str;
    std::vector<std::string> fsArr;
    fs.open("inter.jis");
    while (!fs.eof())
    {

        fs >> str;
        fsArr.push_back(str);
    }
    fs.close();
    himnakan(fsArr);
    setlocale(LC_ALL, "am");
    /* for (int i = 0; i < tveriHamar.size(); ++i)
    {
        std::cout << tveriHamar[i].tver;
    }*/

    return 0;
}
