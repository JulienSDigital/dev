/**
 * @file Commands.hpp
 * @author Maudiy
 * @since 2017
 * @brief Fichier d'entête pour la classe Commands
*/

#ifndef DEF_Commands
#define DEF_Commands
#include <iostream>
#include <curl/curl.h>
#include <string>
#include "Factory.hpp"


/**
* @class Commands Commands.hpp
*
* @brief Définition de la classe Commands.
*
* Classe
*/
class Commands : public Factory
{
	private:
		std::shared_ptr<Attack> _attack;
		int _choix;
		std::string _couleur;
		std::string _jaune;
		std::string _rouge;
		std::string _bleu;
		std::string _vert;
		std::string _rose;
		std::string _reset;

	public:
/**
 * @brief Constructeur
 * Constructeur de la classe Commands
 * @param
*/
		Commands();

/**
 * @brief fabriquerAttaque
 * méthode qui permet de fabriquer des attaques concrètes
 * @param
 * @return shared_ptr<Attack> attack
*/
		std::shared_ptr<Attack> fabriquerAttaque();

/**
 * @brief demarrage
 * méthode qui permet d'afficher le message de démarrage de l'application
 * @param
*/
		void demarrage();

/**
 * @brief help
 * méthode qui permet d'afficher l'aide pour l'application
 * @param
*/
		void help();

/**
 * @brief choisir
 * méthode qui permet de choisir l'attaque que l'on souhaite effectuer
 * @param
*/
		void choisir();

/**
 * @brief attaquer
 * méthode qui permet de lancer une attaque en reprenant les méthodes adéquats
 * @param
*/
		void attaquer();
/** @brief color
 * méthode qui permet de changer la couleur du terminal
 * @param
*/
		void color();

/**
 * @brief choixHeader
 * méthode qui permet de choisir les headers souhaités et donc d'utiliser le decorator
 * @param
*/
		void choixHeader();

/**
 * @brief reset
 * méthode qui permet de remettre à zéro la couleur du terminal
 * @param
*/
		void reset();



};
#endif