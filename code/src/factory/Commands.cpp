#include "Commands.hpp"
using namespace std;

Commands::Commands()
{
	_jaune = "\033[0;33m";
	_rouge = "\033[0;31m";
	_bleu = "\033[0;34m";
	_vert = "\033[0;32m";
	_rose = "\033[0;35m";
	_reset = "\033[0m";
}

shared_ptr<Attack> Commands::fabriquerAttaque()
{
	if (_choix == 1)
	{
		return make_shared<Lfi>();
	}
	else if (_choix == 2)
	{
		return make_shared<Rfi>();
	}
	else if (_choix == 3)
	{
		return make_shared<ShellShock>();
	}
	else if (_choix == 4)
	{
		return make_shared<Upload>();
	}
	else if (_choix == 5)
	{
		return make_shared<Download>();
	}
	else
	{
		return make_shared<Download>();
	}

}

void Commands::demarrage()
{
	cout << "###### Maudiy Attacker v1 ######" << endl;
	cout << "Julien Lamarche (c) 2017" << endl;
	cout << "Bienvenue dans l'application n'hésitez pas à vérifier les mises à jour via le github" << endl;
}

void Commands::reset()
{
	cout << _reset << endl;
}

void Commands::help()
{

}

void Commands::choixHeader()
{
	string rep = "y";
	string entete;
	string valeur;
	while (rep == "y" || rep == "Y")
	{
		cout << "Voulez-vous introduire des HttpHeaders (Y) ?" << endl;
		cin >> rep;
		if (rep == "y" || rep == "Y")
		{
			cout << "Entrez le nom de l'entête: " << endl;
			cout << "(cookies, host, referer, useragent, header)" << endl;
			cin >> entete;
			cout << "Veuillez saisir la valeur de l'entête: " << endl;
			cout << "(Pour un autre header vous devez entrer le nom de l'entête suivit de la valeur par exemple: header:value)" << endl;
			cin >> valeur;
	
			if (entete == "cookies")
			{
				CookiesModifier cookiesModifier(_attack);
				cookiesModifier.modifier(valeur);
			}
			else if (entete == "host")
			{
				HostModifier hostModifier(_attack);
				hostModifier.modifier(valeur);
			}
			else if (entete == "referer")
			{
				RefererModifier refererModifier(_attack);
				refererModifier.modifier(valeur);
			}
			else if (entete == "useragent")
			{
				UserAgentModifier useragentModifier(_attack);
				useragentModifier.modifier(valeur);
			}
			else if (entete == "header")
			{
				HeadersModifier headersModifier(_attack);
				headersModifier.modifier(valeur);
			}
			else
			{
				cout << "Erreur dans le choix de l'entête HTTP." << endl;
			}
		}	
	}

}

void Commands::choisir()
{
	cout << "Que souhaitez-vous faire ?" << endl;
	cout << "1) Faille Lfi" << endl;
	cout << "2) Faille Rfi" << endl;
	cout << "3) Faille ShellShock" << endl;
	cout << "4) Faille Upload" << endl;
	cout << "5) Télécharger une page" << endl;
	cin >> _choix;
}

void Commands::attaquer()
{
	choisir();
	_attack = fabriquerAttaque();
	_attack->preparerAttaque();
	choixHeader();
	_attack->telecharger();
	_attack->afficher();
	
}

void Commands::color()
{	
	
	cout << "Quelle couleur souhaitez-vous ?" << endl;
	cout << "(jaune, vert, bleu, rouge, rose)" << endl;
	cin >> _couleur;
	if (_couleur == "jaune")
	{
		cout << _jaune << endl; 
	}
	else if (_couleur == "vert")
	{
		cout << _vert << endl;
	}
	else if (_couleur == "bleu")
	{
		cout << _bleu << endl;
	}
	else if (_couleur == "rouge")
	{
		cout << _rouge << endl;
	}
	else if (_couleur == "rose")
	{
		cout << _rose << endl;
	}
	else
	{
		cout << "Mauvaise couleur." << endl;
	}
}