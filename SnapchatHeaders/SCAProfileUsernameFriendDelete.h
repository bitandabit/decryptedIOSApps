//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAProfileUsernameFriendDelete : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *hasDisplayName;
    NSNumber *withDisplayPic;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (_Bool)getWithDisplayPic;
- (void)setWithDisplayPic:(_Bool)arg1;
- (_Bool)getHasDisplayName;
- (void)setHasDisplayName:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

