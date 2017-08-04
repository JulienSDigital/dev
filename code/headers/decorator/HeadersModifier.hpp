/**
 * @file HeadersModifier.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entêtepour le decorator concret HeadersModifier
*/

#ifndef DEF_HeadersModifier
#define DEF_HeadersModifier
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Decorator.hpp"

/**
* @class HeadersModifier HeadersModifier.hpp
*
* @brief Définition de la classe HeadersModifier.
*
* Classe de l'outil HeadersModifier qui permet de modifier les httpheaders.
*/
class HeadersModifier : private Decorator
{
	public:
/**
 * @brief Constructeur
 * Constructeur de la classe HeadersModifier
 * @param shared_ptr<Attack> attack
*/
		HeadersModifier(std::shared_ptr<Attack> attack);

/**
 * @brief modifier
 * Permet d'ajouter une entête http
 * @param string str
*/
		void modifier(std::string str);

};
#endif