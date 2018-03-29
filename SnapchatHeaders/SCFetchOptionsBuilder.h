//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate;

@interface SCFetchOptionsBuilder : NSObject
{
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _fetchOffset;
    unsigned long long _fetchLimit;
    NSArray *_propertiesToFetch;
}

+ (id)withFetchOptions:(id)arg1;
- (void).cxx_destruct;
- (id)setPropertiesToFetch:(id)arg1;
- (id)setFetchLimit:(unsigned long long)arg1;
- (id)setFetchOffset:(unsigned long long)arg1;
- (id)setSortDescriptors:(id)arg1;
- (id)setPredicate:(id)arg1;
- (id)build;

@end

