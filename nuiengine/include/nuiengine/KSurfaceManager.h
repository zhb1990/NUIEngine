﻿//  **************************************
//  File:        KSurfaceManager.h
//  Copyright:   Copyright(C) 2013-2017 Wuhan KOTEI Informatics Co., Ltd. All rights reserved.
//  Website:     http://www.nuiengine.com
//  Description: This code is part of NUI Engine (NUI Graphics Lib)
//  Comments:
//  Rev:         2
//  Created:     2017/4/12
//  Last edit:   2017/4/28
//  Author:      Chen Zhi
//  E-mail:      cz_666@qq.com
//  License: APACHE V2.0 (see license file) 
//  ***************************************
#ifndef K_SURFACE_MANAGER_H
#define K_SURFACE_MANAGER_H

#include "boost/unordered_map.hpp"
#include "renderingengine.h"
#define  mapSurfaceMap boost::unordered_map<kn_string, IRESurface*>
using namespace skia_surface;
class NUI_API KSurfaceManager
{
private:

	mapSurfaceMap m_SurfaceManagerMap;
public:
	KSurfaceManager();
	~KSurfaceManager();
	IRESurface* GetSurface(kn_string surfacepath);
};
typedef mapSurfaceMap::iterator MAPSurfaceIter;

NUI_API KSurfaceManager*  getSurfaceManager();
NUI_API void ReleaseSurfaceManager();
#endif
