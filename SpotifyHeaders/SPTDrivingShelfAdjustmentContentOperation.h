//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBContentOperation.h"

@interface SPTDrivingShelfAdjustmentContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTDrivingShelvesExperiment> _shelvesExperiment;
    id <SPTDrivingLiveRadioService> _liveRadioService;
}

@property(readonly, nonatomic) id <SPTDrivingLiveRadioService> liveRadioService; // @synthesize liveRadioService=_liveRadioService;
@property(readonly, nonatomic) id <SPTDrivingShelvesExperiment> shelvesExperiment; // @synthesize shelvesExperiment=_shelvesExperiment;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rearrangeModelBuilders:(id)arg1 viewModelBuilder:(id)arg2;
- (void)performForViewURI:(id)arg1 featureInfo:(id)arg2 connectivityState:(unsigned long long)arg3 viewModelBuilder:(id)arg4 previousError:(id)arg5;
- (id)initWithPlaybackController:(id)arg1 shelvesExperiment:(id)arg2 liveRadioService:(id)arg3;

@end

