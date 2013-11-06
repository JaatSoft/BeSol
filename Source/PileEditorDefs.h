// PileEditorDefs.h
// Generated by Interface Elements (Window v2.3) on Apr 3 1999
// Do not modify this file!



/*

Views in Pile_Editor:
	<unnamed> (BTabView)
	"General Properties"  (BView)
	<unnamed> (BBox)
	<unnamed> (BBox)
	"New Cards - Flip"  (BCheckBox)
	"New Cards - Offsetup"  (BTextControl)
	"_input_"  (_BTextInput_)
	"New Cards - Orientation"  (BMenuField)
	"_mc_mb_"  (_BMCMenuBar_)
	<unnamed> (BStringView)
	"Accept On Empty - Value"  (BMenuField)
	"_mc_mb_"  (_BMCMenuBar_)
	"Accept On Empty - Suit"  (BMenuField)
	"_mc_mb_"  (_BMCMenuBar_)
	"New Cards - Offsetdown"  (BTextControl)
	"_input_"  (_BTextInput_)
	<unnamed> (BBox)
	"Empty on Win"  (BCheckBox)
	"Scoring - Add"  (BTextControl)
	"_input_"  (_BTextInput_)
	"Scoring - Remove"  (BTextControl)
	"_input_"  (_BTextInput_)
	<unnamed> (BBox)
	"Pile Ordering - None"  (BRadioButton)
	"Pile Ordering - Some"  (BRadioButton)
	<unnamed> (BBox)
	"cycle suits"  (BCheckBox)
	"cycle values"  (BCheckBox)
	"Pile Ordering - Suit Steps"  (BMenuField)
	"_mc_mb_"  (_BMCMenuBar_)
	"Pile Ordering - Value Steps"  (BMenuField)
	"_mc_mb_"  (_BMCMenuBar_)
	<unnamed> (BBox)
	"Card Popping - None"  (BRadioButton)
	"Card Popping - Some"  (BRadioButton)
	<unnamed> (BBox)
	"Card Popping - # times"  (BTextControl)
	"_input_"  (_BTextInput_)
	"Card Popping - To"  (BMenuField)
	"_mc_mb_"  (_BMCMenuBar_)
	"Card Popping - numcards"  (BTextControl)
	"_input_"  (_BTextInput_)
	"Deal String"  (BTextControl)
	"_input_"  (_BTextInput_)
	"ID"  (BTextControl)
	"_input_"  (_BTextInput_)
	"update"  (BButton)
	"edit list"  (BMenuField)
	"_mc_mb_"  (_BMCMenuBar_)
	"edit single"  (BMenuField)
	"_mc_mb_"  (_BMCMenuBar_)
	"update single"  (BButton)

*/


// Message constants:
enum {
	IE_PILEEDITOR_NEWCARDSFLIP = 0xD8L,
	IE_PILEEDITOR_NEWCARDSOFFSETUP = 0x1FAL,
	IE_PILEEDITOR_NEWCARDSORIENTATION_FACE_UP = 0x16BL,
	IE_PILEEDITOR_NEWCARDSORIENTATION_FACE_DOWN = 0x16CL,
	IE_PILEEDITOR_NEWCARDSORIENTATION_NO_PREF_ = 0x173L,
	IE_PILEEDITOR_ACCEPTONEMPTYVALUE_TOGGLE_ALL = 0x2D8L,
	IE_PILEEDITOR_ACCEPTONEMPTYSUIT_TOGGLE_ALL = 0x2D6L,
	IE_PILEEDITOR_NEWCARDSOFFSETDOWN = 0x2A5L,
	IE_PILEEDITOR_EMPTYONWIN = 0xABL,
	IE_PILEEDITOR_SCORINGADD = 0x1EEL,
	IE_PILEEDITOR_SCORINGREMOVE = 0x1F4L,
	IE_PILEEDITOR_PILEORDERINGNONE = 0xDBL,
	IE_PILEEDITOR_PILEORDERINGSOME = 0xE1L,
	IE_PILEEDITOR_CYCLESUITS = 0x62L,
	IE_PILEEDITOR_CYCLEVALUES = 0x5EL,
	IE_PILEEDITOR_PILEORDERINGSUITSTEPS_TOGGLE_ALL = 0x2D4L,
	IE_PILEEDITOR_PILEORDERINGVALUESTEPS_TOGGLE_ALL = 0x2D2L,
	IE_PILEEDITOR_CARDPOPPINGNONE = 0x121L,
	IE_PILEEDITOR_CARDPOPPINGSOME = 0x1D5L,
	IE_PILEEDITOR_CARDPOPPINGTIMES = 0x83L,
	IE_PILEEDITOR_CARDPOPPINGNUMCARDS = 0x1E6L,
	IE_PILEEDITOR_DEALSTRING = 0x1D0L,
	IE_PILEEDITOR_ID = 0x20AL,
	IE_PILEEDITOR_UPDATE = 0x185L,
	IE_PILEEDITOR_EDITLIST_TOGGLE_ALL = 0x2B7L,
	IE_PILEEDITOR_UPDATESINGLE = 0x280L
};

