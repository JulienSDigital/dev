/**
 * @file Decorator.hpp
 * @author DevS_id
 * @since 2016
 * @brief Fichier d'entête pour la classe mère des Decorator.
*/

#ifndef DEF_Decorator
#define DEF_Decorator
#include <iostream>
#include <curl/curl.h>
#include <string>
#include <memory>
#include "Attack.hpp"

/**
* @class Decorator Decorator.hpp
*
* @brief Définition de la classe Decorator.
*
* Classe mère pour reprendre tous les différents Decorator.
*/
class Decorator : public Attack
{
	protected:
		std::shared_ptr<Attack> _attack;

	public:
/**
 * @brief modifier
 * Permet d'ajouter une entête http
 * @param string str
 */
		void virtual modifier(std::string str){};

};
#endif