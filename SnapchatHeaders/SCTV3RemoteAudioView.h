//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTV3RoundCornerView.h"

#import "SCTV3PresenceChangeListener-Protocol.h"

@class NSString, SCLoadingIndicatorView, SCTV3PresenceChangeListenerAnnouncer, SCTV3WaveformView, UIColor, UIView;

@interface SCTV3RemoteAudioView : SCTV3RoundCornerView <SCTV3PresenceChangeListener>
{
    SCTV3PresenceChangeListenerAnnouncer *_presenceChangeAnnouncer;
    UIColor *_presenceColor;
    SCTV3WaveformView *_waveformView;
    SCLoadingIndicatorView *_spinnerView;
    UIView *_overlayView;
    long long _mediaStatus;
}

@property(nonatomic) long long mediaStatus; // @synthesize mediaStatus=_mediaStatus;
- (void).cxx_destruct;
- (void)_hideOverlayView;
- (void)_showOverlayView;
- (void)_addSpinnerView;
- (void)_addOverlayView;
- (void)presenceChanged:(_Bool)arg1;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 presenceColor:(id)arg2 presenceChangeAnnouncer:(id)arg3 speechActivityAnnouncer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
