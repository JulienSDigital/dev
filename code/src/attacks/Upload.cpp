#include "Upload.hpp"
using namespace std;

Upload::Upload()
{
}

void Upload::preparePayload()
{
	string technique;
	cout << "Quel technique souhaitez-vous utiliser ?" << endl;
	cout << "(doubleextension)" << endl;
	cin >> technique;
	if (technique == "doubleextension")
	{
		_strategy = make_shared<StrategyDoubleExt>();
	}
	else
	{
		_strategy = make_shared<StrategyDoubleExt>();
	}
	string fichier;
	cout << "Quel fichier voulez-vous voir le code (par exemple: config.php) ?" << endl;
	cin >> fichier;
	_payload = _strategy->preparePayload(fichier);
	
}