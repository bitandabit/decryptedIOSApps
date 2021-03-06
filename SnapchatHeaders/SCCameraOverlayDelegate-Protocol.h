//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AddedFriend, SCCameraOverlayView, SCLens, SCLongPressGestureRecognizer, SCNavigationItem_DEPRECATED, UIGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UISwipeGestureRecognizer, UIView;
@protocol SCLensCameraScreenDataProviderProtocol, SCLensProcessingCore;

@protocol SCCameraOverlayDelegate <UIGestureRecognizerDelegate, UIScrollViewDelegate>
@property(readonly, nonatomic) unsigned long long recordingState;
- (void)cameraOverlayViewDidSelectCreateYourOwnLens:(SCCameraOverlayView *)arg1;
- (void)cameraOverlayView:(SCCameraOverlayView *)arg1 setAllInterfaceElementsHidden:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)cameraOverlayView:(SCCameraOverlayView *)arg1 didUpdateCameraViewType:(long long)arg2;
- (void)cameraOverlayView:(SCCameraOverlayView *)arg1 didTapOnProfileTooltipWithFriend:(AddedFriend *)arg2;
- (SCNavigationItem_DEPRECATED *)cameraNavigationItem;
- (UIView *)profileButtonView;
- (UIView *)mainSuperview;
- (void)setGalleryButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id <SCLensCameraScreenDataProviderProtocol>)lensDataProvider;
- (id <SCLensProcessingCore>)lensProcessingCore;
- (void)lensCallToActionButtonPressed:(SCLens *)arg1;
- (void)thirdPartyLensInformationButtonPressed:(SCLens *)arg1;
- (void)sonicLensToggleButtonPressed;
- (void)memoriesButtonPressed;
- (void)toggleLensesButtonPressed;
- (void)navBarLensButtonPressed;
- (void)snapCraftButtonPressed;
- (void)portraitModeButtonPressed;
- (void)nightModeButtonPressed;
- (void)toggleCameraButtonPressed;
- (void)flashPressed;
- (void)cameraOverlayXButtonPressed;
- (void)replyBackButtonRightPressed;
- (void)replyBackButtonLeftPressed;
- (void)longPress:(SCLongPressGestureRecognizer *)arg1;
- (_Bool)enableScanning;
- (void)longPressOnCameraTimer:(SCLongPressGestureRecognizer *)arg1;
- (void)setRightSwipeGestureRecognizerEnabled;
- (void)setPanGestureRecognizerEnabled:(_Bool)arg1;
- (void)handleSwipeFrom:(UISwipeGestureRecognizer *)arg1;
- (void)handleTapFrom:(UIGestureRecognizer *)arg1;
- (void)handlePanFrom:(UIPanGestureRecognizer *)arg1;
- (void)handlePinchFrom:(UIPinchGestureRecognizer *)arg1;
- (void)doubleTap:(UIGestureRecognizer *)arg1;
@end

