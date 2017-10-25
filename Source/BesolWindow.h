//Jason Wrinkle - Solitaire Game 
//Copyright (C) 1999  Jason Wrinkle (jwrinkle@utdallas.edu)
//
//This program is free software; you can redistribute it and/or 
//modify it under the terms of the GNU General Public License 
//as published by the Free Software Foundation; either version 2 
//of the License, or (at your option) any later version. 
//
//This program is distributed in the hope that it will be useful, 
//but WITHOUT ANY WARRANTY; without even the implied warranty of 
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
//GNU General Public License for more details. 
//
//You should have received a copy of the GNU General Public License 
//along with this program; if not, write to the Free Software 
//Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA. 


// BesolWindow.h
// Generated by Interface Elements (Window v2.3) on Feb 19 1999
// This is a user written class and will not be overwritten.

#include <FilePanel.h>
#include <Directory.h>
#include <Path.h>
#include <PopUpMenu.h>
#include <View.h>
#include <Beep.h>
#include <SupportKit.h>
#include <File.h>
#include <Roster.h>

#ifndef IEWINDOW
#define IEWINDOW
#include <IEWindow.h>
#endif

#include "other project defs.h"
#include <PopUpMenu.h>
#include <MenuItem.h>

#ifndef SOLWINDOWDEFS
#define SOLWINDOWDEFS
#include "BesolWindowDefs.h"
#endif

#include "TransmissionRuleEditor.h"
#include "misc.h"

#ifndef _BESOLWINDOW_H_
#define _BESOLWINDOW_H_



class BesolWindow : public IEWindow
{
	public:
		BesolWindow(void);
		~BesolWindow(void);
		virtual bool QuitRequested();
		virtual void MessageReceived(BMessage *message);
		virtual void MenusBeginning();
		BPopUpMenu* popmenu;
		virtual void DispatchMessage(BMessage* message, BHandler* handler);
		virtual void MouseDown(BPoint location);
	private:
		void Clear();
		BFile* layoutfile;
		BFile* gamefile;
		void Save_Game(BMessage* game);
		void Save_Layout(BMessage* layout);
		bool Open_Game(BMessage* game);
		bool Open_Layout(BMessage* layout);
		void getfile(BMessage* message, bool open, bool to_be_app);
};

#endif
