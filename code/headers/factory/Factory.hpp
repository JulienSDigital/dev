/**
 * @file Factory.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour la classe Factory
*/

#ifndef DEF_Factory
#define DEF_Factory
#include <iostream>
#include <curl/curl.h>
#include <string>
#include <memory>
#include "Lfi.hpp"
#include "Rfi.hpp"
#include "ShellShock.hpp"
#include "Download.hpp"
#include "Upload.hpp"
#include "CookiesModifier.hpp"
#include "HeadersModifier.hpp"
#include "HostModifier.hpp"
#include "RefererModifier.hpp"
#include "UserAgentModifier.hpp"

/**
* @class Factory Factory.hpp
*
* @brief Définition de la classe Factory.
*
* Classe
*/
class Factory 
{
	public:
/**
 * @brief fabriquerAttaque
 * méthode virtuelle pure pour fabriquer des attaques
 * @param
 * @return shared_ptr<Attack> attack
*/
		virtual std::shared_ptr<Attack> fabriquerAttaque() = 0;
		//virtual Outils fabriquerOutils(std::string type){};
		//virtual Attack attaquer(std::string type) = 0;




};
#endif