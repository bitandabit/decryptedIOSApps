//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SCLRUCacheNode;
@protocol SCLRUCacheDelegate;

@interface SCLRUCache : NSObject
{
    NSMutableDictionary *_keysToNodes;
    SCLRUCacheNode *_headNode;
    SCLRUCacheNode *_tailNode;
    unsigned long long _totalCostLimit;
    unsigned long long _countLimit;
    unsigned long long _totalCost;
    unsigned long long _count;
    id <SCLRUCacheDelegate> _delegate;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <SCLRUCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(nonatomic) unsigned long long totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;
- (void).cxx_destruct;
- (void)_evictObjectsForCostChange:(long long)arg1 countChange:(long long)arg2;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (void)_moveNodeToHead:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1 markRecentlyUsed:(_Bool)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;

@end

