//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface SCCloudSyncOperationSnapshotBuilder : NSObject
{
    NSString *_objectID;
    NSDate *_createTimeUtc;
    NSData *_payload;
    NSString *_requestID;
    long long _seqNum;
    NSString *_targetEntryId;
}

+ (id)withCloudSyncOperationSnapshot:(id)arg1;
- (void).cxx_destruct;
- (id)setTargetEntryId:(id)arg1;
- (id)setSeqNum:(long long)arg1;
- (id)setRequestID:(id)arg1;
- (id)setPayload:(id)arg1;
- (id)setCreateTimeUtc:(id)arg1;
- (id)setObjectID:(id)arg1;
- (id)build;

@end

