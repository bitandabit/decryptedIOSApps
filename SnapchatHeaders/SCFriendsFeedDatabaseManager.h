//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCPersistentStore;

@interface SCFriendsFeedDatabaseManager : NSObject
{
    SCPersistentStore *_store;
}

- (void).cxx_destruct;
- (void)_readFromFeedTableWithPersistentStoreAccessor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_rewriteFeedTableWithPersistentStoreAccessor:(id)arg1 insertSql:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readFeedItemsFromFeedTableWithCompletion:(CDUnknownBlockType)arg1;
- (void)rewriteFeedTableWithFeedItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserId:(id)arg1;

@end

