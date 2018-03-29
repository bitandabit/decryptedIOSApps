//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, SCSearchQuery;

@interface SCSearchQueryDeduplicator : NSObject
{
    NSArray *_duplicationPolicies;
    SCSearchQuery *_previousQuery;
    SCSearchQuery *_lastPassedQuery;
    NSDate *_lastPassedQueryCheckTime;
}

- (void).cxx_destruct;
- (void)_updateQueryStatesWithCurrentQuery:(id)arg1 isDuplicated:(_Bool)arg2;
- (_Bool)isQueryDuplicated:(id)arg1;
- (id)initWithPolicies:(id)arg1;

@end

