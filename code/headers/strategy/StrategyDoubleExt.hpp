/**
 * @file StrategyDoubleExt.hpp
 * @author DevS_id
 * @since 2016
 * @brief Fichier d'entête de la stratégie StrategyDoubleExt pour utiliser la faille upload à double extensions.
*/
#ifndef DEF_StrategyDoubleExt
#define DEF_StrategyDoubleExt
#include <string>
 #include "Strategy.hpp"

/**
 * @class StrategyDoubleExt StrategyDoubleExt.hpp
 * 
 * @brief Définition de la classe StrategyDoubleExt.
 *
 * C'est une stratégie concrète qui permet d'utiliser la faille upload à double extension
*/
class StrategyDoubleExt : public Strategy
{
	public:

/**
 * @brief Constructeur
 * Constructeur de la classe StrategyDoubleExt
 * @param
*/
 		StrategyDoubleExt();

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