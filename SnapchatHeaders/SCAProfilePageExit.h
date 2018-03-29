//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAProfilePageExit : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *newAddedMeCount;
    NSNumber *hasProfilePic;
    long long destination;
    long long destinationPage;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getDestinationPage;
- (void)setDestinationPage:(long long)arg1;
- (long long)getDestination;
- (void)setDestination:(long long)arg1;
- (_Bool)getHasProfilePic;
- (void)setHasProfilePic:(_Bool)arg1;
- (long long)getNewAddedMeCount;
- (void)setNewAddedMeCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
