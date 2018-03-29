//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol LSAPlatformTrackingDelegate <NSObject>
- (_Bool)isDeviceSupported;
- (void)didFinishTrackingProcessingForRequirement:(unsigned int)arg1;
-     // Error parsing type: B80@0:8{?=[4]}16, name: didRequestTrackingRestartWithExistingTransform:
- (_Bool)didRequestTrackingRestartAtPoint:(struct CGPoint)arg1;
- (_Bool)didRequestTrackingEndWithRequirement:(unsigned int)arg1;
- (_Bool)didRequestTrackingReset;
- (_Bool)didRequestTrackingBeginWithRequirement:(unsigned int)arg1;
- (_Bool)didRequestTrackingDataGeneration:(struct TrackingData *)arg1 useAnchors:(_Bool)arg2 requirements:(unsigned int)arg3;
@end

