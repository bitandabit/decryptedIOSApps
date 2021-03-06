//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCManagedCapturerListener-Protocol.h"
#import "SCManagedVideoDataSourceListener-Protocol.h"

@class NSString, SCQueuePerformer;
@protocol SCBlackCameraDetectorDelegate;

@interface SCBlackCameraNoOutputDetector : NSObject <SCManagedVideoDataSourceListener, SCManagedCapturerListener>
{
    _Bool _sampleBufferReceived;
    _Bool _blackCameraDetected;
    _Bool _blackCameraRecovered;
    _Bool _checkingScheduled;
    _Bool _sessionStoppedRunning;
    id <SCBlackCameraDetectorDelegate> _delegate;
    SCQueuePerformer *_queuePerformer;
}

@property(retain, nonatomic) SCQueuePerformer *queuePerformer; // @synthesize queuePerformer=_queuePerformer;
@property(nonatomic) __weak id <SCBlackCameraDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)managedCapturer:(id)arg1 didStopRunning:(id)arg2;
- (void)managedCapturer:(id)arg1 didStartRunning:(id)arg2;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 devicePosition:(unsigned long long)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

