//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaPlaylistAdTrackProtocol-Protocol.h"

@class NSString;

@interface SCPromotedStoriesAdTrackHandler : NSObject <SCOperaPlaylistAdTrackProtocol>
{
}

- (id)adSessionId;
- (_Bool)isNofillAdGroup:(id)arg1;
- (void)logAdSkipWithAdGroup:(id)arg1;
- (id)adViewContextForSkippedGroup:(id)arg1;
- (id)adRequestClientIdForGroup:(id)arg1;
- (id)skippedAdGroupAroundGroup:(id)arg1 pagedLeft:(_Bool)arg2;
- (_Bool)isNofillAdItem:(id)arg1;
- (void)logAdSkipWithAdItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (id)adViewContextForSkippedItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (id)skippedItemAroundItem:(id)arg1 pageLeft:(_Bool)arg2;
- (id)adViewContextForItem:(id)arg1 operaViewController:(id)arg2;
- (long long)adSnapIndexForItem:(id)arg1;
- (id)adRequestClientIdForItem:(id)arg1 playlistItemController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
