#pragma once
#include<map>
#include "person.h"
class Candidate
{
	int candidate_id;
	const char* party_name;
	std::map<int, Person>;
	public:
		void regist();
		void edit_details();
};