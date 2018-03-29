//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatHamburgerTableSectionProtocol-Protocol.h"
#import "SCChatSCChatHamburgerSectionSettingCellDelegate-Protocol.h"

@class NSDictionary, NSString, SCEditGroupNameAlertViewController, SCLeaveGroupAlertViewController;
@protocol SCChatHamburgerTableSectionDataSource, SCChatHamburgerTableSectionDelegate, SCChatHamburgerTableSectionGroupSettingDataSource, SCChatHamburgerTableSectionGroupSettingDelegate, SCChatHamburgerTableSectionPresentationDelegate;

@interface SCChatHamburgerTableSectionGroupSetting : NSObject <SCChatSCChatHamburgerSectionSettingCellDelegate, SCChatHamburgerTableSectionProtocol>
{
    id <SCChatHamburgerTableSectionDataSource> tableDataSource;
    id <SCChatHamburgerTableSectionDelegate> tableDelegate;
    id <SCChatHamburgerTableSectionPresentationDelegate> presentationDelegate;
    id <SCChatHamburgerTableSectionGroupSettingDataSource> _dataSource;
    id <SCChatHamburgerTableSectionGroupSettingDelegate> _delegate;
    NSDictionary *_reuseCellClassesByIdentifiers;
    SCEditGroupNameAlertViewController *_editGroupNameAlertViewController;
    SCLeaveGroupAlertViewController *_leaveGroupAlertViewController;
}

@property(retain, nonatomic) SCLeaveGroupAlertViewController *leaveGroupAlertViewController; // @synthesize leaveGroupAlertViewController=_leaveGroupAlertViewController;
@property(retain, nonatomic) SCEditGroupNameAlertViewController *editGroupNameAlertViewController; // @synthesize editGroupNameAlertViewController=_editGroupNameAlertViewController;
@property(copy, nonatomic) NSDictionary *reuseCellClassesByIdentifiers; // @synthesize reuseCellClassesByIdentifiers=_reuseCellClassesByIdentifiers;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionGroupSettingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionGroupSettingDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionDelegate> tableDelegate; // @synthesize tableDelegate;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionDataSource> tableDataSource; // @synthesize tableDataSource;
- (void).cxx_destruct;
- (void)hamburgerSectionSettingCell:(id)arg1 switchTapped:(_Bool)arg2;
- (void)hamburgerRoundedCornerCellTapped:(id)arg1;
- (void)hamburgerRoundedCornerCellLongPressed:(id)arg1;
- (void)_showGroupStoryUpdateFailureAlert;
- (void)_updateGroupStoryAutosaveSettingsOnServer:(id)arg1 cell:(id)arg2;
- (void)_createGroupStoryWithLocalPublication:(id)arg1 cell:(id)arg2;
- (void)_handleAutosaveToggled:(id)arg1;
- (void)_handleNotificationSwitched;
- (void)_handleAddParticipantsOption;
- (void)_handleLeaveGroupOption;
- (void)_handleEditNameGroupOption;
- (void)_handleCellTappedAndLongPressedActionForCell:(unsigned long long)arg1;
- (_Bool)_touchEnabledForCellType:(unsigned long long)arg1;
- (_Bool)_showRightCaretForCellType:(unsigned long long)arg1;
- (_Bool)_isSwitchOnForCellTpe:(unsigned long long)arg1;
- (_Bool)_showSwitchForCellType:(unsigned long long)arg1;
- (id)_iconImageForCellType:(unsigned long long)arg1;
- (id)_titleForCellType:(unsigned long long)arg1;
- (double)heightForCellAtIndex:(unsigned long long)arg1;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfCells;
- (void)resetSection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
