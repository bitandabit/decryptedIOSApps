//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "LSATouchProcessingDelegate-Protocol.h"
#import "SCLensDataProviderListener-Protocol.h"

@class LSATouchProcessingController, NSString, SCCameraOverlayView, SCLensBitmojiProvider, SCLensCompassAndLocationProvider, SCLensDataProvider, SCLensGeoDataProvider, SCLensRemoteAssetsDataProvider, SCLensUriServiceProvider, SCLensUserDataProvider, SCLookseryFilterFactory, SCUserSession;
@protocol SCCapturer, SCLensProcessingCore;

@interface SCLensSonicController : NSObject <SCLensDataProviderListener, LSAEffectComponentListener, LSATouchProcessingDelegate>
{
    SCCameraOverlayView *_cameraOverlayView;
    id <SCCapturer> _managedCapturer;
    id <SCLensProcessingCore> _lensProcessingCore;
    SCLensDataProvider *_lensDataProvider;
    SCUserSession *_userSession;
    LSATouchProcessingController *_touchProcessingController;
    SCLensCompassAndLocationProvider *_lensCompassAndLocationProvider;
    SCLensRemoteAssetsDataProvider *_lensRemoteAssetsDataProvider;
    SCLensBitmojiProvider *_lensBitmojiProvider;
    SCLensUriServiceProvider *_uriServiceProvider;
    SCLensUserDataProvider *_lensUserDataProvider;
    SCLensGeoDataProvider *_lensGeoDataProvider;
    SCLookseryFilterFactory *_filterFactory;
    NSString *_lensId;
    NSString *_lensUpdateToken;
    _Bool _providersInitialized;
    _Bool _active;
    _Bool _interactive;
}

@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)touchProcessingController:(id)arg1 didReceiveError:(id)arg2;
- (void)touchProcessingControllerDidFinishInteraction:(id)arg1;
- (void)lensDataProvider:(id)arg1 didUpdateLens:(id)arg2;
- (void)lensDataProvider:(id)arg1 didUpdateAllLenses:(id)arg2 requiresAnimation:(_Bool)arg3;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 performInterfaceAction:(unsigned long long)arg3 interfaceElement:(unsigned long long)arg4 interfaceData:(id)arg5;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)deactivate;
- (void)_initProviders;
- (void)_activateLens:(id)arg1;
- (void)updateStudioLens:(id)arg1;
- (void)activate;
- (id)initWithCameraOverlayView:(id)arg1 capturer:(id)arg2 lensDataProvider:(id)arg3 lensProcessingCore:(id)arg4 userSession:(id)arg5 compassAndLocationProvider:(id)arg6 remoteAssetsDataProvider:(id)arg7 bitmojiProvider:(id)arg8 uriServiceProvider:(id)arg9 userDataProvider:(id)arg10 geoDataProvider:(id)arg11;
- (id)initWithCameraOverlayView:(id)arg1 capturer:(id)arg2 lensDataProvider:(id)arg3 lensProcessingCore:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

