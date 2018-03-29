//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SCEncryptedTable, SCQueuePerformer;

@interface SCEncryptedWriteThroughCache : NSObject
{
    SCEncryptedTable *_table;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_cache;
}

@property(readonly, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) SCEncryptedTable *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (_Bool)_deleteObjectWithId:(id)arg1;
- (_Bool)_replaceObject:(id)arg1;
- (_Bool)_insertObject:(id)arg1;
- (id)_objectWithId:(id)arg1;
- (_Bool)deleteObjectWithId:(id)arg1;
- (_Bool)replaceObject:(id)arg1;
- (_Bool)insertObject:(id)arg1;
- (id)objectWithId:(id)arg1;
- (id)idForObject:(id)arg1;
- (void)loadCache;
- (id)initWithTable:(id)arg1 performer:(id)arg2;

@end

