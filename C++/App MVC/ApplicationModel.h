#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"

class ApplicationModel : public MVC::Model { 
	private:
	int prodotti [10]={25,8,5,7,12,15,18,45,9,6};
	int valore;

	public:
	void Rimuovi(int i);
	void Aggiungi(int i );
	void Svuota();
	int getValore();
	
};

#endif
