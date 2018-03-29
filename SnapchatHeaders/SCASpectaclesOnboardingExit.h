//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASpectaclesOnboardingEventBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCASpectaclesOnboardingExit : SCASpectaclesOnboardingEventBase <MapSerializable, NSCopying>
{
    long long onboardingExitSource;
}

- (id)asDictionary;
- (long long)getOnboardingExitSource;
- (void)setOnboardingExitSource:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
