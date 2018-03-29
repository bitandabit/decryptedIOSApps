//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString, SCFriendsFeedPaginationMetadata, SCFriendsFeedRankingMetadata, SCFriendsFeedSyncMetadata;

@interface SCFriendsFeedMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_userId;
    SCFriendsFeedSyncMetadata *_syncMetadata;
    SCFriendsFeedPaginationMetadata *_paginationMetadata;
    SCFriendsFeedRankingMetadata *_rankingMetadata;
}

+ (id)deletionRequestForFriendsFeedMetadata:(id)arg1;
+ (id)changeRequestForFriendsFeedMetadata:(id)arg1;
+ (id)creationRequestWithFriendsFeedMetadata:(id)arg1;
@property(copy, nonatomic) SCFriendsFeedRankingMetadata *rankingMetadata; // @synthesize rankingMetadata=_rankingMetadata;
@property(copy, nonatomic) SCFriendsFeedPaginationMetadata *paginationMetadata; // @synthesize paginationMetadata=_paginationMetadata;
@property(copy, nonatomic) SCFriendsFeedSyncMetadata *syncMetadata; // @synthesize syncMetadata=_syncMetadata;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_friendsFeedMetadata;
- (id)initWithRowid:(long long)arg1 userId:(id)arg2 syncMetadata:(id)arg3 paginationMetadata:(id)arg4 rankingMetadata:(id)arg5;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

