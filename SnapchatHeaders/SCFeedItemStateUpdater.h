//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;
@protocol SCPerforming;

@interface SCFeedItemStateUpdater : NSObject
{
    NSString *_username;
    id <SCPerforming> _performer;
    NSDictionary *_lastOneOnOneSyncedIds;
    NSDictionary *_lastMischiefSyncedIds;
}

- (void).cxx_destruct;
- (void)updateSyncStateWithViewModels:(id)arg1;
- (void)resetAvailablePaidReplayStatesWithViewModels:(id)arg1 excludingConversations:(id)arg2;
- (void)resetStatesWithViewModels:(id)arg1 isFromBackground:(_Bool)arg2;
- (id)initWithUsername:(id)arg1;

@end

