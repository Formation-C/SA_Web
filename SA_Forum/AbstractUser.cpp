#include "AbstractUser.h"

Event* AbstractUser::GetEvents()
{
	return nullptr;
}

void AbstractUser::SubscribeEvent(Event)
{
}

bool AbstractUser::HasEvent(Event)
{
	return false;
}

void AbstractUser::UnsubscribeEvent(Event)
{
}
