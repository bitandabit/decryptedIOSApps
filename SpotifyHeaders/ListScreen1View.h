//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDView.h"

@class IDButton, IDCheckbox, IDLabel, IDTable;

@interface ListScreen1View : IDView
{
    IDButton *_masterButton0;
    IDButton *_masterButton1;
    IDCheckbox *_masterOptionButtonCheckbox;
    IDButton *_skipPrevPageButton;
    IDLabel *_labelNoEntries;
    IDLabel *_labelStatusMessageWithLoadingSpinner;
    IDLabel *_group0Label;
    IDTable *_group0Table;
    IDLabel *_group1Label;
    IDTable *_group1Table;
    IDLabel *_group2Label;
    IDTable *_group2Table;
    IDLabel *_group3Label;
    IDTable *_group3Table;
    IDLabel *_group4Label;
    IDTable *_group4Table;
    IDButton *_skipNextPageButton;
}

@property(retain) IDButton *skipNextPageButton; // @synthesize skipNextPageButton=_skipNextPageButton;
@property(retain) IDTable *group4Table; // @synthesize group4Table=_group4Table;
@property(retain) IDLabel *group4Label; // @synthesize group4Label=_group4Label;
@property(retain) IDTable *group3Table; // @synthesize group3Table=_group3Table;
@property(retain) IDLabel *group3Label; // @synthesize group3Label=_group3Label;
@property(retain) IDTable *group2Table; // @synthesize group2Table=_group2Table;
@property(retain) IDLabel *group2Label; // @synthesize group2Label=_group2Label;
@property(retain) IDTable *group1Table; // @synthesize group1Table=_group1Table;
@property(retain) IDLabel *group1Label; // @synthesize group1Label=_group1Label;
@property(retain) IDTable *group0Table; // @synthesize group0Table=_group0Table;
@property(retain) IDLabel *group0Label; // @synthesize group0Label=_group0Label;
@property(retain) IDLabel *labelStatusMessageWithLoadingSpinner; // @synthesize labelStatusMessageWithLoadingSpinner=_labelStatusMessageWithLoadingSpinner;
@property(retain) IDLabel *labelNoEntries; // @synthesize labelNoEntries=_labelNoEntries;
@property(retain) IDButton *skipPrevPageButton; // @synthesize skipPrevPageButton=_skipPrevPageButton;
@property(retain) IDCheckbox *masterOptionButtonCheckbox; // @synthesize masterOptionButtonCheckbox=_masterOptionButtonCheckbox;
@property(retain) IDButton *masterButton1; // @synthesize masterButton1=_masterButton1;
@property(retain) IDButton *masterButton0; // @synthesize masterButton0=_masterButton0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 hmiProvider:(id)arg4;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;

@end

