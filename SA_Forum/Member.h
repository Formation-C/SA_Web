#pragma once
#include "AbstractUser.h"
class Member :
	public AbstractUser
{
	// Objet contenqnt les références vers toutes les instances de la classe


	// Constantes
	static const int ROLE_ADMIN = 2;
	static const int ROLE_MODO = 1;
	static const int ROLE_MEMBER = 0;
	int role;
	
};

