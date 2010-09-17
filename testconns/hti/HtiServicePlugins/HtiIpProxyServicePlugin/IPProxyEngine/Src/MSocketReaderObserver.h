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
* Description:  Events for socket reader
*
*/



#ifndef MSOCKETREADEROBSERVER_H
#define MSOCKETREADEROBSERVER_H

//  INCLUDES
#include <e32def.h>
#include <es_sock.h>


// CLASS DECLARATION

/**
*  Events for socket reader.
*/
NONSHARABLE_CLASS( MSocketReaderObserver )
    {

    public: // Abstract functions

        /**
        * Data has been received.
        * @param aData Received data.
        */
        virtual void DataReceivedL( const TDesC8& aData ) = 0;

        /**
        * Notifies that error has occurred.
        * @param aErrorCode Error code.
        */
        virtual void ReaderErrorL( TInt aErrorCode ) = 0;

        /**
        * Notifies that the observer has leaved while executing the callback
        * function.
        * @param aLeaveCode Leave code.
        */
        virtual void ObserverLeaved( TInt aLeaveCode ) = 0;
    };

#endif      // MSOCKETREADEROBSERVER_H

// End of File
