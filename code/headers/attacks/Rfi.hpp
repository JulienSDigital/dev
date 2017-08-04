/**
 * @file Rfi.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour la faille Rfi
*/
#ifndef DEF_Rfi
#define DEF_Rfi
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Attack.hpp"
#include "StrategyRfi.hpp"

/**
* @class Rfi Rfi.hpp
*
* @brief Définition de la classe Rfi.
*
* Classe concrète pour lancer les attaques de type Rfi.
*/

class Rfi : public Attack
{

	public:

/**
 * @brief Constructeur
 * Constructeur de la classe Rfi
 * @param
*/
		Rfi();

/**
  * @brief preparePayload
  * Permet de préparer le payload pour notre injection
  * @param
*/		
		void preparePayload();

};
#endif
