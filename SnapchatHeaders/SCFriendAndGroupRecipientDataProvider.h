//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGroupManagerListener-Protocol.h"
#import "SCSearchableRecipientDataProvider-Protocol.h"

@class NSArray, NSString, SCSortableRecipientFilter, SCUserSession;
@protocol SCPerforming, SCSearchableRecipientDataProviderDelegate;

@interface SCFriendAndGroupRecipientDataProvider : NSObject <SCGroupManagerListener, SCSearchableRecipientDataProvider>
{
    SCUserSession *_userSession;
    id <SCSearchableRecipientDataProviderDelegate> _delegate;
    id <SCPerforming> _updatePerformer;
    SCSortableRecipientFilter *_filter;
    NSString *_lastQuery;
    _Bool _enableMatchType;
    NSArray *_allRecipientArray;
    NSArray *_filteredRecipientArray;
}

@property(retain) NSArray *filteredRecipientArray; // @synthesize filteredRecipientArray=_filteredRecipientArray;
@property(retain) NSArray *allRecipientArray; // @synthesize allRecipientArray=_allRecipientArray;
- (void).cxx_destruct;
- (void)didCreateGroupOnServerWithId:(id)arg1 initialSojuMischief:(id)arg2;
- (void)didJoinGroupWithId:(id)arg1;
- (void)didBeginLeavingGroupWithId:(id)arg1;
- (void)didChangeInfoForGroupWithId:(id)arg1;
- (void)didFinishLoadingGroups;
- (void)_didAddOrRemoveFriend:(id)arg1;
- (void)_notifyDelegateDataUpdate;
- (void)_filterSearch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_resetFilter;
- (void)_reloadData;
- (id)filteredRecipients;
- (unsigned long long)searchSectionType;
- (void)filterSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
