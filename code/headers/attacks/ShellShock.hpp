/**
 * @file ShellShock.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour la faille ShellShock
*/
#ifndef DEF_ShellShock
#define DEF_ShellShock
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Attack.hpp"
#include "StrategySS.hpp"


/**
* @class ShellShock ShellShock.hpp
*
* @brief Définition de la classe ShellShock.
*
* Classe concrète pour lancer les attaques de type ShellShock.
*/

class ShellShock : public Attack
{

	public:

/**
 * @brief Constructeur
 * Constructeur de la classe ShellShock
 * @param
*/
		ShellShock();

/**
  * @brief preparePayload
  * Permet de préparer le payload pour notre injection
  * @param
*/
		void preparePayload();

};
#endif