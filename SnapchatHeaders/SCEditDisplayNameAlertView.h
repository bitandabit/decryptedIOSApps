//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class Friend, NSString, SCAlertViewActionButtonController, SCAlertViewActionTextFieldController;

@interface SCEditDisplayNameAlertView : NSObject <UITextFieldDelegate>
{
    NSString *_initialFirstName;
    NSString *_initialLastName;
    NSString *_firstNamePlaceHolder;
    NSString *_lastNamePlaceHolder;
    NSString *_saveButtonText;
    NSString *_cancelButtonText;
    NSString *_alertTitle;
    NSString *_alertDescription;
    CDUnknownBlockType _saveDisplayNameCompleteBlock;
    CDUnknownBlockType _savePressedBlock;
    CDUnknownBlockType _dismissBlock;
    Friend *_editingFriend;
    SCAlertViewActionTextFieldController *_displayNameTextFieldAction;
    SCAlertViewActionButtonController *_saveButton;
    SCAlertViewActionButtonController *_cancelButton;
}

@property(retain, nonatomic) SCAlertViewActionButtonController *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) SCAlertViewActionButtonController *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) SCAlertViewActionTextFieldController *displayNameTextFieldAction; // @synthesize displayNameTextFieldAction=_displayNameTextFieldAction;
@property(retain, nonatomic) Friend *editingFriend; // @synthesize editingFriend=_editingFriend;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType savePressedBlock; // @synthesize savePressedBlock=_savePressedBlock;
@property(copy, nonatomic) CDUnknownBlockType saveDisplayNameCompleteBlock; // @synthesize saveDisplayNameCompleteBlock=_saveDisplayNameCompleteBlock;
@property(retain, nonatomic) NSString *alertDescription; // @synthesize alertDescription=_alertDescription;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(retain, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(retain, nonatomic) NSString *saveButtonText; // @synthesize saveButtonText=_saveButtonText;
@property(retain, nonatomic) NSString *lastNamePlaceHolder; // @synthesize lastNamePlaceHolder=_lastNamePlaceHolder;
@property(retain, nonatomic) NSString *firstNamePlaceHolder; // @synthesize firstNamePlaceHolder=_firstNamePlaceHolder;
@property(retain, nonatomic) NSString *initialLastName; // @synthesize initialLastName=_initialLastName;
@property(retain, nonatomic) NSString *initialFirstName; // @synthesize initialFirstName=_initialFirstName;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)showAlert;
- (id)_displayNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (void)_initalDisplayName:(id)arg1;
- (id)initWithFriend:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
