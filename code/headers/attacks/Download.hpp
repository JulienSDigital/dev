/**
 * @file Download.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour télécharger un fichier
*/
#ifndef DEF_Download
#define DEF_Download
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Attack.hpp"
#include "StrategyDL.hpp"


/**
* @class Download Download.hpp
*
* @brief Définition de la classe Download.
*
* Classe concrète pour simplement télécharger un site.
*/

class Download : public Attack
{

	public:

/**
 * @brief Constructeur
 * Constructeur de la classe Download
 * @param
*/		
 		Download();

/**
  * @brief preparePayload
  * Permet de préparer le payload pour notre injection
  * @param
*/
		void preparePayload();


};
#endif
