//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCAPagePageView : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *viewTimeSec;
    long long exitEvent;
    NSString *page;
    NSString *sourcePage;
    NSString *profileSessionId;
    NSDate *appOpenTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getAppOpenTs;
- (void)setAppOpenTs:(id)arg1;
- (id)getProfileSessionId;
- (void)setProfileSessionId:(id)arg1;
- (id)getSourcePage;
- (void)setSourcePage:(id)arg1;
- (id)getPage;
- (void)setPage:(id)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
