//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAAppResourceState : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *resourceClassMB;
    NSNumber *totalMB;
    NSNumber *freeMB;
    NSNumber *usedMB;
    long long resourceType;
    long long resourceLevel;
    long long appState;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getAppState;
- (void)setAppState:(long long)arg1;
- (long long)getResourceLevel;
- (void)setResourceLevel:(long long)arg1;
- (long long)getResourceType;
- (void)setResourceType:(long long)arg1;
- (long long)getUsedMB;
- (void)setUsedMB:(long long)arg1;
- (long long)getFreeMB;
- (void)setFreeMB:(long long)arg1;
- (long long)getTotalMB;
- (void)setTotalMB:(long long)arg1;
- (long long)getResourceClassMB;
- (void)setResourceClassMB:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
