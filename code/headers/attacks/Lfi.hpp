/**
 * @file Lfi.hpp
 * @author DevS_id
 * @since 2016
 * @brief Fichier d'entête pour la faille Lfi
*/
#ifndef DEF_Lfi
#define DEF_Lfi
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Attack.hpp"
#include "StrategyLfi.hpp"
#include "StrategyPhpFilter.hpp"


/**
* @class Lfi Lfi.hpp
*
* @brief Définition de la classe Lfi.
*
* Classe concrète pour lancer les attaques de type lfi.
*/

class Lfi : public Attack
{

	public:

/**
 * @brief Constructeur
 * Constructeur de la classe Lfi
 * @param
*/
		Lfi();

/**
  * @brief preparePayload
  * Permet de préparer le payload pour notre injection
  * @param
*/
		void preparePayload();


};
#endif
