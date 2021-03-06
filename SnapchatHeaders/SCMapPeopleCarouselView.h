//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMCHammerView.h"

#import "SCMapCarouselViewDataSource-Protocol.h"
#import "SCMapCarouselViewDelegate-Protocol.h"
#import "SCMapPeopleVerticalScrollingViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSOrderedSet, NSSet, NSString, SCMapCarouselView, SCMapPeopleVerticalScrollingView, SCMapPerson, SCUserSession;
@protocol SCMapPeopleCarouselViewDelegate;

@interface SCMapPeopleCarouselView : SCMCHammerView <SCMapCarouselViewDelegate, SCMapCarouselViewDataSource, SCMapPeopleVerticalScrollingViewDelegate, UIGestureRecognizerDelegate>
{
    SCMapCarouselView *_carouselView;
    SCUserSession *_userSession;
    NSOrderedSet *_clusters;
    NSSet *_unorderedClusters;
    NSArray *_wantsUpdateRawClusters;
    SCMapPeopleVerticalScrollingView *_cachedView;
    long long _cachedViewIndex;
    _Bool _updating;
    id <SCMapPeopleCarouselViewDelegate> _delegate;
    SCMapPerson *_visiblePerson;
}

@property(retain, nonatomic) SCMapPerson *visiblePerson; // @synthesize visiblePerson=_visiblePerson;
@property(nonatomic) __weak id <SCMapPeopleCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mapCarouselView:(id)arg1 didShowViewAtIndex:(long long)arg2 actionType:(long long)arg3;
- (void)peopleVerticalScrollingView:(id)arg1 wantsChatForPeople:(id)arg2;
- (void)linkBitmojiCarouselItemViewDidTapLinkBitmoji:(id)arg1;
- (void)personCarouselItemViewDidTapStory:(id)arg1;
- (void)personCarouselItemViewDidLongPressProfile:(id)arg1;
- (void)personCarouselItemViewDidTapProfile:(id)arg1;
- (id)mapCarouselView:(id)arg1 viewForIndex:(long long)arg2;
- (long long)numberOfViewsInMapCarouselView:(id)arg1;
- (id)_defaultVisiblePersonForClusters:(id)arg1;
- (id)_clusterContainingPerson:(id)arg1 clusters:(id)arg2;
- (id)_unorderedClustersFromClusters:(id)arg1;
- (id)_convertClusters:(id)arg1;
- (void)updateClusters:(id)arg1 forced:(_Bool)arg2;
- (void)setClusters:(id)arg1;
- (id)_clustersByBringingPerson:(id)arg1 toFrontOfCluster:(id)arg2 inClusters:(id)arg3;
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

