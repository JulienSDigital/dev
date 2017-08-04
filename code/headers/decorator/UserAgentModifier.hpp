/**
 * @file UserAgentModifier.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour le decorator concret UserAgentModifier
*/

#ifndef DEF_UserAgentModifier
#define DEF_UserAgentModifier
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Decorator.hpp"

/**
* @class UserAgentModifier UserAgentModifier.hpp
*
* @brief Définition de la classe UserAgentModifier.
*
* Classe de l'outil UserAgentModifier qui permet de modifier l'user agent.
*/
class UserAgentModifier : private Decorator
{
	public:
/**
 * @brief Constructeur
 * Constructeur de la classe UserAgentModifier
 * @param shared_ptr<Attack> attack
*/
		UserAgentModifier(std::shared_ptr<Attack> attack);

/**
 * @brief modifier
 * Permet d'ajouter une entête http
 * @param string str
*/
		void modifier(std::string str);

};
#endif