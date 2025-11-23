#include <string>

std::string switcheroo(const std::string &s) 
{
    std::string result = s;

    for (char &c : result)
    {
        switch (c)
        {
        case 'a':
            c = 'b';
            break;
        case 'b':
            c = 'a';
            break;
        }
    }
    return result;
}