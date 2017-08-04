/**
 * @file Attack.hpp
 * @author DevS_id
 * @since 2016
 * @brief Fichier d'entête pour les attaques.
*/

#ifndef DEF_Attack
#define DEF_Attack
#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include <string>
#include <memory>
#include "Strategy.hpp"
#include "StrategyRfi.hpp"

/**
* @class Attack Attack.hpp
*
* @brief Définition de la classe Attack.
*
* Classe abstraite pour lancer les attaques.
*/

class Attack
{
	protected:
		std::string _url;
		//std::string _type;
		//std::string _dossier;
		//std::string _nomSite;
		std::string _payload;
		std::string _params;
		struct curl_slist* _list;
		struct curl_slist* _listP;
		CURL* _session;
		std::shared_ptr<Strategy> _strategy;
		CURLcode _res;


	public:
/**
 * @brief Constructeur
 * Constructeur de la classe Attack
 * @param
*/
		Attack();
		virtual ~Attack(){};

/**
 * @brief setUrl
 * Procédure qui va permettre de modifier l'url.
 * @param string url
*/
		void setUrl(std::string url);

/**
 * @brief setParams
 * Procédure qui va permettre de modifier les paramètres.
 * @param string params
*/
		void setParams(std::string params);

/**
 * @brief setType
 * Procédure qui va permettre de modifier le type (GET ou POST).
 * @param string type
*/
		void setType(std::string type);

/**
 * @brief setNomSite
 * Procédure qui va permettre de modifier le nom du site.
 * @param string nomSite
*/
		//void setNomSite(std::string nomSite);


/**
 * @brief seList
 * Procédure qui va permettre de modifier la liste curl pour les entêtes http
 * @param struct curl_slist* list
*/
		void setList(struct curl_slist* list);

/**
 * @brief seList
 * Procédure qui va permettre de modifier la liste curl pour les paramètres en POST
 * @param struct curl_slist* listP
*/
		void setListP(struct curl_slist* listP);

/**
 * @brief setNomSite
 * Procédure qui va permettre de modifier la stratégie courante.
 * @param shared_ptr<Strategy> strategy
*/
		void setStrategy(std::shared_ptr<Strategy> strategy);

/**
 * @brief telecharger
 * Procédure qui va permettre de télécharger le code source d'une page.
 * @param
*/
		void telecharger();

/**
 * @brief afficher
 * Procédure qui va permettre d'afficher l'url et le code source d'une page.
 * @param
*/
		void afficher();


/**
 * @brief preparerAttaque
 * Procédure qui va permettre de préparer notre attaque
 * @param
*/
		void preparerAttaque();

/**
 * @brief preparerParams
 * Procédure qui va permettre de préparer nos paramètres
 * @param
*/
		void preparerParams();

/**
 * @brief preparerSite
 * Procédure qui va permettre de préparer le site web en entrant l'url
 * @param
*/
		void preparerSite();

/**
 * @brief preparePayload
 * Procédure virtuell qui permet de préparer notre payload et d'appeler les différentes stratégies
 * @param
*/
		virtual void preparePayload();

/** 
 * @brief ajouterParametre
 * Procédure qui permet d'ajouter un paramètre pour l'url
 * @param string param
*/
		void ajouterParametre(std::string param);

/**
 * @brief getUrl
 * Fonction qui permet de retourner l'url
 * @return string _url
*/
		std::string getUrl();

/**
 * @brief getParams
 * Fonction qui permet de retourner les paramètres pour la méthode GET
 * @return string _params
*/
		std::string getParams();

/**
 * @brief getType
 * Fonction qui permet de retourner le type des méthodes
 * @return string _type
*/
		//std::string getType();

/**
 * @brief getNomSite
 * Fonction qui retourne le nom du site
 * @return String _nomSite
*/
		//std::string getNomSite();

/**
 * @brief getList
 * Fonction qui retourne la liste pour les entêtes http
 * @return curl_slist* _List
*/
		struct curl_slist* getList();

/**
 * @brief getListP()
 * Fonction qui retourne la liste pour les paramètres en POST
 * @return curl_slist* _listP
*/
 		struct curl_slist* getListP();

};
#endif
