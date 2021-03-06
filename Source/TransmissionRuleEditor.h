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


// TransmissionRuleEditor.h
// Generated by Interface Elements (Window v2.3) on Mar 12 1999
// This is a user written class and will not be overwritten.

#ifndef _TRANSMISSIONRULEEDITOR_H_
#define _TRANSMISSIONRULEEDITOR_H_

#include <vector.h>
#include <Font.h>
#include <Beep.h>

#include "IEWindow.h"
#include "TRANSRULES.h"
#include "misc.h"
#include "deck_struct.h"

#include "TransmissionRuleEditorDefs.h"

class TransmissionRuleEditor : public IEWindow
{
public:
	TransmissionRuleEditor(void);
	~TransmissionRuleEditor(void);
	
	virtual void MessageReceived(BMessage *message);
	
	void CleanUp();

	void Set_Target(BView* trgt);
	
	void Reset();
	
private:
	BView* target;
	vector<int32> targetrulest;
	vector<int32> targetrulesf;
	bool makesym;

	TRANSRULES* current_rules;

	list<char*> IDstrings;
};

#endif
