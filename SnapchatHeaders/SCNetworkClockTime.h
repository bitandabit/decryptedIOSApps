//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface SCNetworkClockTime : NSObject
{
    NSDate *_creationDate;
    double _creationMediaTime;
}

@property(readonly) double creationMediaTime; // @synthesize creationMediaTime=_creationMediaTime;
- (void).cxx_destruct;
- (id)currentTime;
- (id)initWithServerTime:(id)arg1;

@end

