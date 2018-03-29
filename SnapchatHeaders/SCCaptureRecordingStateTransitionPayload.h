//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStateTransitionPayload.h"

@class NSString, NSURL, SCManagedVideoCapturerOutputSettings;

@interface SCCaptureRecordingStateTransitionPayload : SCStateTransitionPayload
{
    SCManagedVideoCapturerOutputSettings *_outputSettings;
    double _maxDuration;
    NSURL *_fileURL;
    NSString *_captureSessionID;
    CDUnknownBlockType _block;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSString *captureSessionID; // @synthesize captureSessionID=_captureSessionID;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(readonly, nonatomic) SCManagedVideoCapturerOutputSettings *outputSettings; // @synthesize outputSettings=_outputSettings;
- (void).cxx_destruct;
- (id)initWithFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 outputSettings:(id)arg3 maxDuration:(double)arg4 fileURL:(id)arg5 captureSessionID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end
