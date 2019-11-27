#pragma once
#include <iostream>
#include "Event.h"

using namespace std;
class AbstractUser
{
protected:
	string name;
	string email;
private:
	int users_tot_number;
public:
		virtual Event* GetEvents() = 0;
		virtual void SubscribeEvent(Event& _event) = 0;
		virtual bool HasEvent(Event _event) = 0;
		virtual void UnsubscribeEvent(Event& _event) = 0;;
		
};

