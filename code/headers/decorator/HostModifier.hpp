/**
 * @file HostModifier.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour le decorator concret HostModifier
*/

#ifndef DEF_HostModifier
#define DEF_HostModifier
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Decorator.hpp"

/**
* @class HostModifier HostModifier.hpp
*
* @brief Définition de la classe HostModifier.
*
* Classe de l'outil HostModifier qui permet de modifier les httpHost.
*/
class HostModifier : private Decorator
{
	public:
/**
 * @brief Constructeur
 * Constructeur de la classe HostModifier
 * @param shared_ptr<Attack> attack
*/
		HostModifier(std::shared_ptr<Attack> attack);
		
/**
 * @brief modifier
 * Permet d'ajouter une entête http
 * @param string str
*/
		void modifier(std::string str);

};
#endif