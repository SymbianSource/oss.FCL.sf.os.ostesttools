/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies). 
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
* 
* Description:
*/
#ifndef __HTI_PLUGIN_DEF__
#define __HTI_PLUGIN_DEF__

//additional export functions requried for an hti-plugin
#define HTI_KEYEVENT_SOAP_ACTION "HtiKeyEvent"
#define HTI_KEYEVENT_UID 0x1020DEC1

#include "HtiKeyEvent.nsmap" //generated static namespaces struct

class HtiSoapHandlerInterface;

/**
* Return the name that is used to redirect SOAP request
* to the plugin by comparing it to soapAction header
**/
extern "C" __declspec(dllexport) char* soapActionName(){return HTI_KEYEVENT_SOAP_ACTION;};

/**
* Returns service UID of corresponding symbian side service used
* in HTI messages. It's used for redirection of the messages from HTI
**/
extern "C" __declspec(dllexport) int serviceUID(){return HTI_KEYEVENT_UID;};

/**
* Returns service namespace list
**/
extern "C" __declspec(dllexport) Namespace* serviceNamespaces(){return namespaces;};

/**
* 
*/
extern "C" __declspec(dllexport) int hti_serve(HtiSoapHandlerInterface*){return 0;};

#endif //__HTI_PLUGIN_DEF__