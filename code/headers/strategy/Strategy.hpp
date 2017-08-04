/**
 * @file Strategy.hpp
 * @author DevS_id
 * @since 2016
 * @brief Fichier d'entête pour la classe mère des Strategy.
*/

#ifndef DEF_Strategy
#define DEF_Strategy
#include <iostream>
#include <curl/curl.h>
#include <string>

/**
* @class Strategy Strategy.hpp
*
* @brief Définition de la classe Strategy.
*
* Classe mère pour reprendre toutes les différentes Strategy (c'est notre strategy abstraite).
*/
class Strategy
{
	public:

/**
 * @brief preparePayload
 * méthode virtuelle pure qui permet de préparer nos payloads
 * @param string str
 * @return string str
*/
		virtual std::string preparePayload(std::string str) = 0;
		//virtual std::string prepareParams(std::string params, std::string result) = 0;


};
#endif
