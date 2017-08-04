/**
 * @file StrategyPhpFilter.hpp
 * @author DevS_id
 * @since 2016
 * @brief Fichier d'entête de la stratégie StrategyPhpFilter pour les lfi.
*/
#ifndef DEF_StrategyPhpFilter
#define DEF_StrategyPhpFilter
#include <string>
 #include "Strategy.hpp"

/**
 * @class StrategyPhpFilter StrategyPhpFilter.hpp
 * 
 * @brief Définition de la classe StrategyPhpFilter.
 *
 * C'est une strétgie concrète qui permet d'utiliser la technique des StrategyPhpFilter pour les lfi
*/
class StrategyPhpFilter : public Strategy
{
	public:

/**
 * @brief Constructeur
 * Constructeur de la classe StrategyPhpFilter
 * @param
*/
 		StrategyPhpFilter();

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