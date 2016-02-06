#ifndef
#define PARSER.h

#include <string>
#include <vector>

class Parser{
    public:
        Parser();
        vector<string> parse(string &s);
        void setShell (Rshell* shell);
    private:
        Rshell* shell;
}
#endif
