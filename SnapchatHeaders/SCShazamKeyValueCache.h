//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EGODatabase, EGODatabaseStatement, NSMutableDictionary, NSString, SCQueuePerformer;

@interface SCShazamKeyValueCache : NSObject
{
    SCQueuePerformer *_performer;
    NSMutableDictionary *_cachedKeyValues;
    NSMutableDictionary *_cachedKeyAttributes;
    NSString *_databasePath;
    EGODatabase *_database;
    EGODatabaseStatement *_beginTransactionStatement;
    EGODatabaseStatement *_commitTransactionStatement;
    EGODatabaseStatement *_queryValueAndAttributesForKeyStatement;
    EGODatabaseStatement *_replaceValueAndAttributesForKeyStatement;
    EGODatabaseStatement *_deleteValueAndAttributesForKeyStatement;
}

- (void).cxx_destruct;
- (void)_setObjectToDatabase:(id)arg1 forKey:(id)arg2 withAttributes:(id)arg3;
- (id)_objectForKeyFromDatabase:(id)arg1 withAttributes:(id *)arg2;
- (void)_setupDatabase;
- (void)_setupDatabasePathWithUserSession:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withAttributes:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 withAttributes:(id *)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

