/**
 * @file Upload.hpp
 * @author DevS_id
 * @since 2016
 * @brief Fichier d'entête pour la faille Upload
*/
#ifndef DEF_Upload
#define DEF_Upload
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Attack.hpp"
#include "StrategyDoubleExt.hpp"



/**
* @class Upload Upload.hpp
*
* @brief Définition de la classe Upload.
*
* Classe concrète pour lancer les attaques de type upload.
*/

class Upload : public Attack
{

	public:

/**
 * @brief Constructeur
 * Constructeur de la classe Upload
 * @param
*/
		Upload();

/**
  * @brief preparePayload
  * Permet de préparer le payload pour notre injection
  * @param
*/
		void preparePayload();


};
#endif
