//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTVideoDisplayViewDelegate.h"
#import "SPTVideoSurface.h"

@class CALayer, NSString, SPTVideoDisplayView, SPTVideoPreferences, SPTVideoSurfaceThumbnailViewControllerImpl, UILabel;

@interface SPTVideoSurfaceImpl : UIView <SPTVideoDisplayViewDelegate, SPTVideoSurface>
{
    _Bool _enabled;
    _Bool _fullscreen;
    _Bool _showsIdentifierLabel;
    _Bool _eligibleForAttachment;
    _Bool _attached;
    NSString *_identifier;
    long long _gravity;
    id <SPTVideoSurfaceDelegate> _delegate;
    long long _priority;
    id <SPTVideoSurfaceContextDelegate> _contextDelegate;
    SPTVideoDisplayView *_displayView;
    id <SPTVideoKeyframeLoader> _keyframeLoader;
    UILabel *_identifierLabel;
    SPTVideoSurfaceThumbnailViewControllerImpl *_thumbnail;
    SPTVideoPreferences *_preferences;
}

@property(retain, nonatomic) SPTVideoPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak SPTVideoSurfaceThumbnailViewControllerImpl *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic, getter=isAttached) _Bool attached; // @synthesize attached=_attached;
@property(retain, nonatomic) UILabel *identifierLabel; // @synthesize identifierLabel=_identifierLabel;
@property(retain, nonatomic) id <SPTVideoKeyframeLoader> keyframeLoader; // @synthesize keyframeLoader=_keyframeLoader;
@property(nonatomic, getter=isEligibleForAttachment) _Bool eligibleForAttachment; // @synthesize eligibleForAttachment=_eligibleForAttachment;
@property(retain, nonatomic) SPTVideoDisplayView *displayView; // @synthesize displayView=_displayView;
@property(nonatomic) _Bool showsIdentifierLabel; // @synthesize showsIdentifierLabel=_showsIdentifierLabel;
@property(nonatomic) __weak id <SPTVideoSurfaceContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic, getter=isFullscreen) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) __weak id <SPTVideoSurfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long gravity; // @synthesize gravity=_gravity;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)createThumbNailViewControllerForSlider:(id)arg1;
- (id)snapshotWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didDetatch;
- (void)willDetatch;
- (void)didAttach;
- (void)willAttach;
- (void)videoDisplayView:(id)arg1 videoRectChanged:(struct CGRect)arg2;
- (void)videoDisplayView:(id)arg1 attachedStateChanged:(_Bool)arg2;
@property(readonly, nonatomic) CALayer *playerLayer;
- (void)didMoveToWindow;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)setGravity:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)refreshVideoRect;
- (void)refreshAttachment;
- (void)refreshEligibleForAttachment;
- (_Bool)sizeIsEligible:(struct CGSize)arg1;
- (_Bool)isEligibleSize;
- (void)changedToSize:(struct CGSize)arg1 fromSize:(struct CGSize)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithIdentifier:(id)arg1 keyframeLoader:(id)arg2 fullscreen:(_Bool)arg3 preferences:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

