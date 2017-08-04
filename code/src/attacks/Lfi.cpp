#include "Lfi.hpp"
using namespace std;

Lfi::Lfi()
{

}

void Lfi::preparePayload()
{
	string technique;
	cout << "Quel technique souhaitez-vous utiliser ?" << endl;
	cout << "(normal, phpfilter)" << endl;
	cin >> technique;
	if (technique == "phpfilter")
	{
		_strategy = make_shared<StrategyPhpFilter>();
	}
	else if(technique == "normal")
	{
		_strategy = make_shared<StrategyLfi>();
	}
	else
	{
		_strategy = make_shared<StrategyLfi>();
	}
	string fichier;
	cout << "Quel fichier voulez-vous voir le code (par exemple: config.php) ?" << endl;
	cin >> fichier;
	_payload = _strategy->preparePayload(fichier);
	
}

