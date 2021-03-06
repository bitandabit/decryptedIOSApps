//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLMapView.h"

#import "SCMapStyleListener-Protocol.h"
#import "SCS2RStackDebuggable-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSString, SCMapBlockUseOverlayView, SCUserSession, UIButton;

@interface SCMapView : MGLMapView <SCMapStyleListener, SCTimeProfilable, SCS2RStackDebuggable>
{
    SCUserSession *_userSession;
    UIButton *_attributionButton;
    SCMapBlockUseOverlayView *_blockUseOverlayView;
    _Bool _showsAttributionButton;
    _Bool _showsKillSwitchOverlay;
    int _mapStyle;
    NSString *_geocodedPlaceName;
}

+ (int)context;
+ (void)_warmupInternalClassesOnBackground;
+ (void)warmupForMapStyle:(int)arg1 userSession:(id)arg2;
@property(nonatomic) int mapStyle; // @synthesize mapStyle=_mapStyle;
@property(nonatomic) _Bool showsKillSwitchOverlay; // @synthesize showsKillSwitchOverlay=_showsKillSwitchOverlay;
@property(copy, nonatomic) NSString *geocodedPlaceName; // @synthesize geocodedPlaceName=_geocodedPlaceName;
@property(nonatomic) _Bool showsAttributionButton; // @synthesize showsAttributionButton=_showsAttributionButton;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)showAttributionActionSheet;
- (void)_updateKillSwitchOverlay;
- (void)mapStyleLoader:(id)arg1 hasUpdateForStyle:(int)arg2;
- (id)styleLoader;
- (id)attributionButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 userSession:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

