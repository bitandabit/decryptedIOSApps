//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureControl.h"

@interface SCFeatureHandsFreeControl : SCFeatureControl
{
}

- (void)setValue:(id)arg1;
- (void)setCanChangeValue:(_Bool)arg1;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)setupRecordLifecycleEvents;

@end

