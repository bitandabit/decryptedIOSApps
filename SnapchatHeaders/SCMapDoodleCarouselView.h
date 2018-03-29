//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMCHammerView.h"

#import "SCMapCarouselViewDataSource-Protocol.h"
#import "SCMapCarouselViewDelegate-Protocol.h"
#import "SCMapDoodleCarouselItemViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSOrderedSet, NSString, SCMapCarouselView, SCMapDoodle, SCUserSession;
@protocol SCMapDoodleCarouselViewDelegate;

@interface SCMapDoodleCarouselView : SCMCHammerView <SCMapCarouselViewDelegate, SCMapCarouselViewDataSource, SCMapDoodleCarouselItemViewDelegate, UIGestureRecognizerDelegate>
{
    SCUserSession *_userSession;
    SCMapCarouselView *_carouselView;
    NSOrderedSet *_doodles;
    id <SCMapDoodleCarouselViewDelegate> _delegate;
    SCMapDoodle *_visibleDoodle;
}

@property(retain, nonatomic) SCMapDoodle *visibleDoodle; // @synthesize visibleDoodle=_visibleDoodle;
@property(nonatomic) __weak id <SCMapDoodleCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mapCarouselView:(id)arg1 didShowViewAtIndex:(long long)arg2 actionType:(long long)arg3;
- (void)doodleCarouselItemViewDidLongPress:(id)arg1;
- (void)doodleCarouselItemViewDidTap:(id)arg1;
- (id)mapCarouselView:(id)arg1 viewForIndex:(long long)arg2;
- (long long)numberOfViewsInMapCarouselView:(id)arg1;
- (void)setDoodles:(id)arg1;
- (void)_springToHidden:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateInWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handlePanGesture:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

