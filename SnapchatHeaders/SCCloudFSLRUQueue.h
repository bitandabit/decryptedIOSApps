//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol SCPerforming;

@interface SCCloudFSLRUQueue : NSObject
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_hashSet;
    NSMutableOrderedSet *_queue;
    long long _storageSize;
    long long _storageSizeLimit;
}

@property(readonly, nonatomic) long long storageSizeLimit; // @synthesize storageSizeLimit=_storageSizeLimit;
@property(readonly, nonatomic) long long storageSize; // @synthesize storageSize=_storageSize;
- (void).cxx_destruct;
- (void)insertItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (id)itemForHashString:(id)arg1;
- (id)evictItem;
- (_Bool)isUndercapacity;
- (double)highestOrder;
- (id)initWithStorageSizeLimit:(long long)arg1 performer:(id)arg2;

@end

