#pragma once


namespace wiInitializer
{
	enum WICKEDENGINE_INITIALIZER
	{
		WICKEDENGINE_INITIALIZE_RENDERER	= 0x0000001,
		WICKEDENGINE_INITIALIZE_IMAGE		= 0x0000010,
		WICKEDENGINE_INITIALIZE_FONT		= 0x0000100,
		WICKEDENGINE_INITIALIZE_SOUND		= 0x0001000,
		WICKEDENGINE_INITIALIZE_DIRECTINPUT = 0x0010000,
		WICKEDENGINE_INITIALIZE_XINPUT		= 0x0100000,
		WICKEDENGINE_INITIALIZE_ALL			= 0x0111111
	};

	void InitializeComponents(int requestedFeautures = WICKEDENGINE_INITIALIZE_ALL);
}

