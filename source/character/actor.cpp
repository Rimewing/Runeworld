#include "..\StandardIncludes.h"
#include "actor.h"
#include <string>

using namespace nActor;

cActor::cActor() {
	_name = nullptr;
	_backend_name = nullptr;
	_hp = 1;
	_mana = 1;
	_stamina = 1;
}

cActor::cActor(cActor & copy) {
	this->_name = new string(*copy._name);
	this->_backend_name = new string(*copy._backend_name);
	this->_hp = copy._hp;
	this->_mana = copy._mana;
	this->_stamina = copy._stamina;
}

cActor::cActor(string& name, string& backend_name, short hp, short mana, short stamina) {
	this->_name = new string(name);
	this->_backend_name = new string(backend_name);
	this->_hp = hp;
	this->_mana = mana;
	this->_stamina = stamina;
}

string cActor::GetName(void) const {
	return *this->_name;
}

string cActor::GetBackendName(void) const {
	return *this->_backend_name;
}

short cActor::GetHP(void) const {
	return this->_hp;
}

short cActor::GetMana(void) const {
	return this->_mana;
}

short cActor::GetStamina(void) const {
	return this->_stamina;
}

void cActor::SetName(string& name) {
	if (this->_name) {
		delete this->_name;
		this ->_name = nullptr;
	}

	this->_name = new string(name);
}

void cActor::SetBackendName(string& backend_name) {
	if (this->_backend_name) {
		delete this->_backend_name;
		this->_backend_name = nullptr;
	}

	this->_backend_name = new string(backend_name);
}

void cActor::SetHP(short hp) {
	this->_hp = hp;
}

void cActor::SetMana(short mana) {
	this->_mana = mana;
}

void cActor::SetStamina(short stamina) {
	this->_stamina = stamina;
}