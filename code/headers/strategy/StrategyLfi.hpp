/**
 * @file StrategyLfi.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour les failles StrategyLfi.
*/

#ifndef DEF_StrategyLfi
#define DEF_StrategyLfi
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Strategy.hpp"

/**
* @class StrategyLfi StrategyLfi.hpp
*
* @brief Définition de la classe StrategyLfi.
*
* Cette classe permet d'executer des failles de type Local File Include.
*/
class StrategyLfi : public Strategy
{
	public:
		
/**
 * @brief Constructeur
 * Constructeur de la classe StrategyLfi
 * @param
*/
 		StrategyLfi();

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
