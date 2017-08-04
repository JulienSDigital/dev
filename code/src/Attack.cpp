#include "Attack.hpp"
using namespace std;

Attack::Attack()
{
	_session = curl_easy_init(); 
	_list = NULL;
	_listP = NULL;
}

void Attack::setStrategy(shared_ptr<Strategy> strategy)
{
	_strategy = strategy;
}

void Attack::setList(struct curl_slist* list)
{
	_list = list;
}

void Attack::setUrl(string url)
{
	_url = url;
}

void Attack::setParams(string params)
{
	_params = params;
}

void Attack::setListP(struct curl_slist* listP)
{
	_listP = listP;
}

/*void Attack::setType(string type)
{
	_type = type;
}*/

/*void Attack::setNomSite(string nomSite)
{
	_nomSite = nomSite;
}*/

string Attack::getUrl()
{
	return _url;
}

string Attack::getParams()
{
	return _params;
}

/*string Attack::getType()
{
	return _type;
}*/

/*string Attack::getNomSite()
{
	return _nomSite;
}*/

struct curl_slist* Attack::getList()
{
	return _list;
}

struct curl_slist* Attack::getListP()
{
	return _listP;
}

void Attack::telecharger()
{
	curl_easy_setopt(_session, CURLOPT_URL, getUrl().c_str());
	curl_easy_setopt(_session, CURLOPT_HTTPHEADER, _list);
	if (_listP != NULL)
	{
		curl_easy_setopt(_session, CURLOPT_POST, 1);
   		curl_easy_setopt(_session, CURLOPT_POSTFIELDS, _listP);
	}

	FILE* fp = fopen("./resultat.html", "w");
	curl_easy_setopt(_session,  CURLOPT_WRITEDATA, fp);
	curl_easy_setopt(_session,  CURLOPT_WRITEFUNCTION, fwrite);
	_res = curl_easy_perform(_session);

	fclose(fp);
	
	curl_easy_cleanup(_session);
	curl_slist_free_all(_list);
	curl_slist_free_all(_listP);
}

void Attack::afficher()
{
	
	ifstream fichier("./resultat.html", ios::in);
	{
		string contenu;
		while(getline(fichier, contenu))
		{
			cout << contenu << endl;
		}
		fichier.close();
	}
	cout << "Url: " << endl;
	cout << _url << endl;
	cout << "Payload: " << endl;
	if (_payload == "")
	{
		cout << "Aucun Payload :(" << endl;
	}
	else
	{
		cout << _payload << endl;
	}
}

void Attack::ajouterParametre(string param)
{
	_params = _params+"&"+param;
}



void Attack::preparerAttaque()
{
	preparerSite();
	preparePayload();
	preparerParams();
}

void Attack::preparerParams()
{
	string type;
	string rep = "y";
	string param;
	while (rep == "y" || rep == "Y")
	{
		cout << "Voulez-vous introduire des paramètres (Y) ?" << endl;
		cin >> rep;
		if ((rep == "y") || (rep == "Y"))
		{
			cout << "Veuillez entrer vos paramètres sous la forme test=valeur" << endl;
			cin >> param;
			
		
			cout << "Quel est le type de paramètres (GET ou POST) ?" << endl;
			cin >> type;
			if (type == "GET")
			{
				ajouterParametre(param);
				
			}
			else if (type == "POST")
			{
				_listP = curl_slist_append(_listP, param.c_str());
			}
			else
			{
				cout << "Erreur dans le choix du type des paramètres." << endl;
			}
		}
	}
	
	if (_payload != "")
	{
		cout << "Où voulez-vous injecter votre payload (GET ou POST) ?" << endl;
		cin >> type;
		cout << "Nom du paramètre où vous voulez injecter (par exemple: page=): " << endl;
		cin >> param;
		if (type == "GET")
		{
			ajouterParametre(param+_payload);
		}
		else if (type == "POST")
		{
			_listP = curl_slist_append(_listP, param.c_str());
		}
		else
		{
			cout << "Mauvais emplacement." << endl;
		}
		if (_params != "")
		{
			setUrl(_url+"?"+this->getParams());
		}
	}
}

void Attack::preparerSite()
{
	cout << "Veuillez entrer l'url du site: " << endl;
	cin >> _url;
	/*cout << "Veuillez entrer le nom du site: " << endl;
	cin >> _nomSite;*/
}

void Attack::preparePayload()
{

}

