//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASwipeBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCALensSwipeBase : SCASwipeBase <MapSerializable, NSCopying>
{
    NSNumber *snapTimeSec;
    NSNumber *timeSinceLastFlipSec;
    NSNumber *faceFrontCameraCount;
    NSNumber *faceBackCameraCount;
    long long lensType;
    NSString *lensBundleUrl;
    NSString *triggerAction;
    NSString *lensSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getLensSessionId;
- (void)setLensSessionId:(id)arg1;
- (id)getTriggerAction;
- (void)setTriggerAction:(id)arg1;
- (id)getLensBundleUrl;
- (void)setLensBundleUrl:(id)arg1;
- (long long)getLensType;
- (void)setLensType:(long long)arg1;
- (long long)getFaceBackCameraCount;
- (void)setFaceBackCameraCount:(long long)arg1;
- (long long)getFaceFrontCameraCount;
- (void)setFaceFrontCameraCount:(long long)arg1;
- (double)getTimeSinceLastFlipSec;
- (void)setTimeSinceLastFlipSec:(double)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

