//#include "StdAfx.h"
#include "ApplicationController.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <windows.h>

ApplicationController::ApplicationController(ApplicationView *v):
	Controller(v)
{
	//myModel=(ApplicationModel*)model; // per non dover fare ogni volta il cast per usare il model
}
			void ApplicationController::logic(){
            int scelta,rimuovi;
            std::cin >> scelta;
            switch(scelta)
    		{
            case 0: 
            exit(0);
            break;

         

            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                 ((ApplicationModel*)model)->Aggiungi(scelta-1);
                break;
            case 11:
                std::cout<<"Inserisci il numero dell'articolo da rimuovere: ";
                do{ 
                    scelta=0;
                    std::cin >> scelta;
                    
                }
                while (scelta < 1 || scelta > 10);
                    ((ApplicationModel*)model)->Rimuovi(scelta-1);
                
                break;
            case 12:
                ((ApplicationModel*)model)->Svuota();
                break;
            case 13:
                std::cout<<"Grazie per l'acquisto di: "<<((ApplicationModel*)model)->getValore()<<"$";   
                Sleep(1500); 
                ((ApplicationModel*)model)->Svuota();
                
                break;
            default:
                std::cout<<"Scelta non disponibile riprova: ";
                break;
    }

    }
	//una sorta di LOOP:loadValue() di model-> notify()->update() di view
	//												   ->update() di control(questo metodo) ->loadValue() di model -> notify()...
	/*void ApplicationController::update(){
		isUptoDate=true;
	}*/

	//funzione alla quale in futuro potrebbe essere associata la tastiera
	void MVC::Controller::handleEvent(MVC::Event * e) {;//fai qualcosa
	}