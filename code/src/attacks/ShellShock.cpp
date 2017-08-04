#include "ShellShock.hpp"
using namespace std;

ShellShock::ShellShock()
{

}

void ShellShock::preparePayload()
{
	
	_strategy = make_shared<StrategySS>();
	string fichier;
	_payload = _strategy->preparePayload(fichier);
}