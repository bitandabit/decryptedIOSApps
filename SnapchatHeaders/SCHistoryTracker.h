//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCHistoryTracker : NSObject
{
    unsigned long long _hits[4];
    int _trackerDepth;
}

- (id)description;
- (id)values;
- (void)advanceForMissedTicks:(int)arg1;
- (void)advanceHit:(_Bool)arg1;
- (id)initWithDepth:(int)arg1;
- (id)init;

@end

