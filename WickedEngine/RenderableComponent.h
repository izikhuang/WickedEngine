#pragma once
#include "CommonInclude.h"
#include "wiRenderTarget.h"
#include "wiDepthTarget.h"
#include "wiResourceManager.h"
#include "wiCVars.h"

class RenderableComponent
{
public:
	static int screenW, screenH;

	wiCVars Params;
	wiResourceManager Content;

	RenderableComponent(){}
	~RenderableComponent(){}

	//initialize component
	virtual void Initialize(){};
	//load (graphics) resources
	virtual void Load(){};
	//delete resources
	virtual void Unload(){};
	//start component, load temporary resources
	virtual void Start(){};
	//unload temporary resources
	virtual void Stop(){};
	//update logic
	virtual void Update(){};
	//Render to layers, rendertargets, etc
	//This will be rendered offscreen
	virtual void Render(){};
	//Compose the rendered layers (for example blend the layers together as Images)
	//This will be rendered to the backbuffer
	virtual void Compose(){};
};

