//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary;
@protocol SCPerforming;

@interface SCDownloadConsumptionRecorder : NSObject <NSCoding>
{
    id <SCPerforming> _queuePerformer;
    NSMutableDictionary *_records;
}

+ (id)path;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *records; // @synthesize records=_records;
- (void).cxx_destruct;
- (void)_pruneExpiredRecords;
- (void)pruneExpiredRecords;
- (void)clear;
- (void)removeRecord:(id)arg1;
- (void)addRecord:(id)arg1;
- (id)recordForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)saveState;

@end

