//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAFilterLensSwipeFaceBase : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *viewTimeSec;
    NSNumber *faceCountFrontCamera;
    NSNumber *faceCountBackCamera;
    NSString *triggerCount;
    NSString *lensOptionId;
    NSString *lensSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getLensSessionId;
- (void)setLensSessionId:(id)arg1;
- (id)getLensOptionId;
- (void)setLensOptionId:(id)arg1;
- (id)getTriggerCount;
- (void)setTriggerCount:(id)arg1;
- (long long)getFaceCountBackCamera;
- (void)setFaceCountBackCamera:(long long)arg1;
- (long long)getFaceCountFrontCamera;
- (void)setFaceCountFrontCamera:(long long)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

