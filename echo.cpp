#include "echo.h"

#include <string>
#include <vector>
using namespace std;

//void echo() {};

int echo::execute( vector<string>& cmds )
{
	cout << cmds[1] << endl;
        
	return 1;
};
