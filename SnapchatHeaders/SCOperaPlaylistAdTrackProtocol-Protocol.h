//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCOperaPlaylistItem, SCOperaPlaylistItemGroup, SCOperaViewController;
@protocol SCOperaPlaylistItemController;

@protocol SCOperaPlaylistAdTrackProtocol <NSObject>
- (NSString *)adSessionId;
- (_Bool)isNofillAdGroup:(SCOperaPlaylistItemGroup *)arg1;
- (void)logAdSkipWithAdGroup:(SCOperaPlaylistItemGroup *)arg1;
- (NSDictionary *)adViewContextForSkippedGroup:(SCOperaPlaylistItemGroup *)arg1;
- (NSString *)adRequestClientIdForGroup:(SCOperaPlaylistItemGroup *)arg1;
- (SCOperaPlaylistItemGroup *)skippedAdGroupAroundGroup:(SCOperaPlaylistItemGroup *)arg1 pagedLeft:(_Bool)arg2;
- (_Bool)isNofillAdItem:(SCOperaPlaylistItem *)arg1;
- (void)logAdSkipWithAdItem:(SCOperaPlaylistItem *)arg1 aroundItem:(SCOperaPlaylistItem *)arg2 pageLeft:(_Bool)arg3;
- (NSDictionary *)adViewContextForSkippedItem:(SCOperaPlaylistItem *)arg1 aroundItem:(SCOperaPlaylistItem *)arg2 pageLeft:(_Bool)arg3;
- (SCOperaPlaylistItem *)skippedItemAroundItem:(SCOperaPlaylistItem *)arg1 pageLeft:(_Bool)arg2;
- (NSDictionary *)adViewContextForItem:(SCOperaPlaylistItem *)arg1 operaViewController:(SCOperaViewController *)arg2;
- (NSString *)adRequestClientIdForItem:(SCOperaPlaylistItem *)arg1 playlistItemController:(id <SCOperaPlaylistItemController>)arg2;
- (long long)adSnapIndexForItem:(SCOperaPlaylistItem *)arg1;
@end

