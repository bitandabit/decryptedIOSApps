//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, SCSearchThresholdBasedExpansionTracker;

@interface SCSearchThresholdBasedModelContainer : NSObject
{
    SCSearchThresholdBasedExpansionTracker *_expansionTracker;
    NSArray *_allObjects;
    NSArray *_expandedObjects;
}

@property(copy, nonatomic) NSArray *expandedObjects; // @synthesize expandedObjects=_expandedObjects;
@property(copy, nonatomic) NSArray *allObjects; // @synthesize allObjects=_allObjects;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numberOfElements;
@property(readonly, nonatomic) _Bool hasMoreObjects;
@property(nonatomic) unsigned long long numberOfExpansions;
- (void)setAllObjects:(id)arg1 shouldResetExpansion:(_Bool)arg2;
- (id)initWithMinimumThreshold:(unsigned long long)arg1 maximumThreshold:(unsigned long long)arg2 incrementThreshold:(unsigned long long)arg3;

@end
