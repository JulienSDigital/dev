#include "Rfi.hpp"
using namespace std;

Rfi::Rfi()
{

}

void Rfi::preparePayload()
{
	
	_strategy = make_shared<StrategyRfi>();
	string site;
	_payload = _strategy->preparePayload(site);
}