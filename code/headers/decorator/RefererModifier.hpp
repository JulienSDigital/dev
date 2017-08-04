/**
 * @file RefererModifier.hpp
 * @author DevS_id
 * @since 2016
 * @brief Fichier d'entête pour le decorator concret RefererModifier
*/

#ifndef DEF_RefererModifier
#define DEF_RefererModifier
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Decorator.hpp"

/**
* @class RefererModifier RefererModifier.hpp
*
* @brief Définition de la classe RefererModifier.
*
* Classe de l'outil RefererModifier qui permet de modifier l'user agent.
*/
class RefererModifier : private Decorator
{
	public:
/**
 * @brief Constructeur
 * Constructeur de la classe RefererModifier
 * @param shared_ptr<Attack> attack
*/
		RefererModifier(std::shared_ptr<Attack> attack);
		
/**
 * @brief modifier
 * Permet d'ajouter une entête http
 * @param string str
*/
		void modifier(std::string str);

};
#endif