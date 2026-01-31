//#include "StdAfx.h"
#include "ApplicationModel.h"


	void ApplicationModel::Rimuovi(int i){
		valore -= prodotti[i];
		notify();
	}
	void ApplicationModel::Aggiungi(int i ){
		valore += prodotti[i];
		notify();
	}
	void ApplicationModel::Svuota(){

		valore =0;
		notify();
	}
	int ApplicationModel::getValore(){
		return valore;
		notify();
	}