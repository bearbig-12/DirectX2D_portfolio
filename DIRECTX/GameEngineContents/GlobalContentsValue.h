#pragma once
#include "Player.h"
#include "Monster.h"

enum class OBJECTORDER
{
	Player,
	Monster,
};


// ���� :
class GlobalContentsValue
{
public:
	class Enums 
	{
	};

	class Actors 
	{
	public:
		static Monster* TestMonster;

	private:
		Actors() {		}
		~Actors() {		}
	};

private:
	GlobalContentsValue()	{	}

	~GlobalContentsValue()	{	}
};

