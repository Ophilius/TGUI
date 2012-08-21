/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus's Graphical User Interface
// Copyright (C) 2012 Bruno Van de Velde (VDV_B@hotmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef _TGUI_GROUP_OBJECT_INCLUDED_
#define _TGUI_GROUP_OBJECT_INCLUDED_

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace tgui
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    struct TGUI_API GroupObject : public OBJECT, Group
    {
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \brief Default constructor
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        GroupObject();


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \brief Copy constructor
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        GroupObject(const GroupObject& copy);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \brief Destructor
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual ~GroupObject();


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \brief Overload of assignment operator
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        GroupObject& operator= (const GroupObject& right);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \internal
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void initialize();


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \internal
        // Send the event to all underlying objects.
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual void handleEvent(sf::Event& event, const float mouseX = 0, const float mouseY = 0);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \internal
        // Focuses the next object in the group. If the last object was focused then all objects will be unfocused and this function will return false.
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        bool focusNextObject();


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif //_TGUI_GROUP_OBJECT_INCLUDED_