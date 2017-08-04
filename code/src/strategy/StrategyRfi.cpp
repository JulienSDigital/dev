#include "StrategyRfi.hpp"
using namespace std;

StrategyRfi::StrategyRfi()
{

}

string StrategyRfi::preparePayload(string str)
{
	return "http://"+str;
}


