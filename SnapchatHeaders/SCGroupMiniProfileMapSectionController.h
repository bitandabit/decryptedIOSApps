//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCFriendLocationsListener-Protocol.h"
#import "SCGroupMiniProfileMapRowControllerDelegate-Protocol.h"

@class NSArray, NSString, SCEmbeddedMapViewLoggingSession, SCUserSession;
@protocol SCChatGroup, SCGroupMiniProfileMapSectionControllerDelegate;

@interface SCGroupMiniProfileMapSectionController : SCMiniProfileSectionController <SCFriendLocationsListener, SCGroupMiniProfileMapRowControllerDelegate>
{
    SCUserSession *_userSession;
    id <SCGroupMiniProfileMapSectionControllerDelegate> _delegate;
    NSArray *_friendUserIdsToDisplay;
    SCEmbeddedMapViewLoggingSession *_mapLoggingSession;
    id <SCChatGroup> _group;
}

@property(retain, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)friendLocationsDidChange:(id)arg1 affectedUserIds:(id)arg2;
- (void)mapRowControllerDidTap:(id)arg1;
- (id)rowControllerAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (void)_reloadState;
- (_Bool)willDisplayMap;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 userSession:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

