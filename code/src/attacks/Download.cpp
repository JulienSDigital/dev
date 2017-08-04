#include "Download.hpp"
using namespace std;

Download::Download()
{

}

void Download::preparePayload()
{
	_strategy = make_shared<StrategyDL>();
	string str;
	str = "";
	_payload = _strategy->preparePayload(str);
	
}