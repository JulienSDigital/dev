/**
 * @file StrategySS.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour la shellshock.
*/

#ifndef DEF_StrategySS
#define DEF_StrategySS
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Strategy.hpp"

/**
* @class StrategySS StrategySS.hpp
*
* @brief Définition de la classe StrategySS.
*
* Cette classe permet d'executer la faille shellshock.
*/
class StrategySS : public Strategy
{
	public:
/**
 * @brief Constructeur
 * Constructeur de la classe StrategySS
 * @param
*/
 		StrategySS();

/**
 * @brief preparePayload
 * méthode qui permet de préparer notre payload
 * @param string str
 * @return string str
*/
 		std::string preparePayload(std::string str);
 		//std::string prepareParams(std::string params, std::string result);

};
#endif