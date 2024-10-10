// cours encapsulation 1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "Point.h"
#include "Vector2.h"
#include "Entity.h"
#include "StaticObject.h"
#include "BreakableObject.h"
int main(int argc, const char* argv[]) {
    // entrer un prénom et le mettre dans un Array,
    // puis recracher tous les composant de l'Array.
    /*
    std::string str;
    std::vector<std::string> strArray;
    while (1) {


        std::cout << "votre prenom :" << std::endl;
        std::cin >> str;
        strArray.push_back(str);
        std::cout << "ces personnes vont s'autodetruire : " << '\n';
        for (int i = 0; i < strArray.size(); i++) {
            std::cout << strArray[i] << '\n';
        }
    }
    */
    //A associer avec Point.h et Point.cpp, Utilisation de la classe
    //Point pour définir un objet point avec des coordonnées x y z
    //et définir ces coordonnées à 0 0 0 puis les afficher
    /*
    point P;
    P.x = 0;
    P.y = 0;
    P.z = 0;
    std::cout << "Point : " << P.ToString() << std::endl;
    */
    // deuxième séance de cours avec les 12 exercices
        //Test exercice 1 :
    /*
    Vector2 V(0.f, 0.f);
    V.set_x(7.f);
    V.set_y(5.f);

    std::cout << "Vecteur :  x : " << V.get_x() << " y : " << V.get_y() << std::endl;
    */
    //Test exercice 2 :
/*
Entity E;
E.SetPositionXY(9.f, 15.f);
std::cout << " La position en x est " << E.GetPositionX() << " et en y est " << E.GetPositionY() << std::endl;
*/
// Test exercice 6 :
/*StaticObject SO(5.f, 8.f);*/
//Test exercice 7 :
/*BreakableObject(4.f, 9.f, 45, 25);*/

};