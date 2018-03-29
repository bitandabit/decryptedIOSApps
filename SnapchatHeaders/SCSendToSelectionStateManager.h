//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchUpdateAnnouncing-Protocol.h"
#import "SCUserSelectionManaging-Protocol.h"

@class NSOrderedSet, NSString, SCSearchUpdateListenerAnnouncer;
@protocol SCPerforming;

@interface SCSendToSelectionStateManager : NSObject <SCSearchUpdateAnnouncing, SCUserSelectionManaging>
{
    SCSearchUpdateListenerAnnouncer *_updateAnnouncer;
    id <SCPerforming> _performer;
    NSOrderedSet *_previouslySelectedItems;
    NSOrderedSet *_selectedItems;
    long long _numberOfNonPrivateGroupStoriesSelected;
    long long _numberOfStoriesSelected;
    long long _numberOfRecpientsSelected;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_selectionResults;
- (_Bool)_wasItemJustToggledItemType:(long long)arg1 itemId:(id)arg2;
- (_Bool)_isItemSelectedItemType:(long long)arg1 itemId:(id)arg2;
- (void)_announceUpdate;
- (void)_updateForNewlyAddedFriend:(id)arg1;
- (void)_deselectedGroupParticipantsInGroup:(id)arg1;
- (void)_didUpdateItemType:(long long)arg1 selected:(_Bool)arg2;
- (_Bool)_canSelectItemType:(long long)arg1;
- (void)_setItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3 announceUpdate:(_Bool)arg4;
- (void)_setItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (void)_updatePreviouslySelectedItems;
- (void)selectNewlyAddedFriend:(id)arg1;
- (long long)numberOfStoriesSelected;
- (long long)numberOfNonPrivateGroupStoriesSelected;
- (id)selectionResults;
- (_Bool)wasItemJustToggledItemType:(long long)arg1 itemId:(id)arg2;
- (_Bool)isItemSelectedItemType:(long long)arg1 itemId:(id)arg2;
- (void)updatePreviouslySelectedItems;
- (void)setCreatedGroupSelected:(id)arg1;
- (void)setItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (id)init;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
