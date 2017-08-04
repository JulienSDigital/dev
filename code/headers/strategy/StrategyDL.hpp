/**
 * @file StrategyDL.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête de la stratégie StrategyDL pour télécharger simplement un fichier.
*/
#ifndef DEF_StrategyDL
#define DEF_StrategyDL
#include <string>
 #include "Strategy.hpp"

/**
 * @class StrategyDL StrategyDL.hpp
 * 
 * @brief Définition de la classe StrategyDL.
 *
 * C'est une strétgie concrète qui permet de simplement télécharger un fichier
*/
class StrategyDL : public Strategy
{
	public:

/**
 * @brief Constructeur
 * Constructeur de la classe StrategyDL
 * @param
*/
 		StrategyDL();

/**
 * @brief preparePayload
 * méthode qui permet de préparer notre payload mais elle ne sert à rien dans le cas d'un simple téléchargement
 * @param string str
 * @return string str
*/
 		std::string preparePayload(std::string str);
 		//std::string prepareParams(std::string params, std::string result);

};
#endif