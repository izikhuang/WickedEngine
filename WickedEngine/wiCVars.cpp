#include "wiCVars.h"

wiCVars* wiCVars::globalVars = nullptr;

wiCVars::wiCVars()
{
	if (globalVars == nullptr)
	{
		SetUp();
	}
}
wiCVars::~wiCVars()
{
	CleanUp();
}
wiCVars* wiCVars::GetGlobal()
{
	if (globalVars == nullptr)
	{
		globalVars = new wiCVars();
	}
	return globalVars;
}


void wiCVars::SetUp()
{
}

const wiCVars::Variable* wiCVars::get(const string& name)
{
	container::iterator it = variables.find(name);
	if(it!=variables.end())
		return it->second;
	else return nullptr;
}
bool wiCVars::add(const string& name, const string& value, Data_Type newType)
{
	if(get(name))
		return false;
	variables.insert< pair<string,Variable*> >( pair<string,Variable*>(name,new Variable(value,newType)) );
	return true;
} 
bool wiCVars::del(const string& name)
{
	Variable* var=nullptr;
	if(!var)
		return false;
	delete(var);
	variables.erase(name);
	return true;
}
bool wiCVars::CleanUp()
{
	return true;
}
