//#include "StdAfx.h"
#include "ApplicationView.h"
#include <iostream>
#include <cstdlib>
ApplicationView::ApplicationView(ApplicationModel *m):
	View(m)
{}

//overriding della funzione MVC::View::draw()
void ApplicationView::draw()
{
	system("cls");
	std::cout << std::endl;

/*	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << "  ID VIEW:"<< this << std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
*/
 std::cout << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "|           NEGOZIO PER CANI - MVC                |" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "| 1. Croccantini Premium - $25 (50 pz)         |" << std::endl;
    std::cout << "| 2. Biscotti per Cani - $8 (100 pz)          |" << std::endl;
    std::cout << "| 3. Palla Rimbalzante - $5 (30 pz)           |" << std::endl;
    std::cout << "| 4. Osso di Gomma - $7 (40 pz)               |" << std::endl;
    std::cout << "| 5. Shampoo per Cani - $12 (25 pz)           |" << std::endl;
    std::cout << "| 6. Spazzola Antiparassiti - $15 (20 pz)     |" << std::endl;
    std::cout << "| 7. Guinzaglio Retrattile - $18 (35 pz)      |" << std::endl;
    std::cout << "| 8. Cuccia Comfort - $45 (15 pz)             |" << std::endl;
    std::cout << "| 9. Ciotola Doppia - $9 (40 pz)              |" << std::endl;
    std::cout << "| 10. Snack Dentali - $6 (80 pz)              |" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "| VALORE CARRELLO: $" << ((ApplicationModel*)model)->getValue() <<" |" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "| COMANDI:                                        |" << std::endl;
    std::cout << "| [0] Esci - [1-10] Aggiungi al carrello         |" << std::endl;
    std::cout << "| [11] Rimuovi - [12] Svuota carrello            |" << std::endl;
    std::cout << "| [13] Acquista                                  |" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "| INSERIRE il comando scelto: ";

}

//void ApplicationView::initialize(){ controller = makeController();}
//MVC::Controller* MVC::View::makeController() { return new MVC::Controller(this); }



