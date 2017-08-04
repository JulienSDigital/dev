/**
 * @file StrategyRfi.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour les failles StrategyRfi.
*/

#ifndef DEF_StrategyRfi
#define DEF_StrategyRfi
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Strategy.hpp"

/**
* @class StrategyRfi StrategyRfi.hpp
*
* @brief Définition de la classe StrategyRfi.
*
* Cette classe permet d'executer des failles de type Remote File Include.
*/
class StrategyRfi : public Strategy
{
	public:
/**
 * @brief Constructeur
 * Constructeur de la classe StrategyRfi
 * @param
*/
 		StrategyRfi();

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