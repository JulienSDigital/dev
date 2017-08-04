/**
 * @file CookiesModifier.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour le decorator concret CookiesModifier
*/

#ifndef DEF_CookiesModifier
#define DEF_CookiesModifier
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Decorator.hpp"
/**
* @class CookiesModifier CookiesModifier.hpp
*
* @brief Définition de la classe CookiesModifier.
*
* Classe de l'outil CookiesModifier qui permet de modifier les cookies.
*/
class CookiesModifier : private Decorator
{
	public:
/**
 * @brief Constructeur
 * Constructeur de la classe CookiesModifier
 * @param shared_ptr<Attack> attack
*/
		CookiesModifier(std::shared_ptr<Attack> attack);
		
/**
 * @brief modifier
 * Permet d'ajouter une entête http
 * @param string str
*/
		void modifier(std::string str);

};
#endif