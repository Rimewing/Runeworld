#include "..\StandardIncludes.h"
#include <string>

using std::string;

#ifndef ACTOR_H
#define ACTOR_H

namespace nActor {
	class cActor{
		// Members
	private:
		string* _name = nullptr;
		string* _backend_name = nullptr;
		short _hp = 0;
		short _mana = 0;
		short _stamina = 0;
		cActor();
		
		// Getters
	public:
		string GetName(void) const;
		string GetBackendName(void) const;
		short GetHP(void) const;
		short GetMana(void) const;
		short GetStamina(void) const;

		// Setters
		void SetName(string&);
		void SetBackendName(string&);
		void SetHP(short);
		void SetMana(short);
		void SetStamina(short);

		cActor(cActor&);
		cActor(string&, string&, short = 1, short = 1, short = 1);
	};
}

#endif
