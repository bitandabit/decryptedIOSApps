//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSMutableDictionary, SCFeedItemSkipStoryTracker, UIImageView, UILabel, UITapGestureRecognizer;
@protocol SCCheetahStoriesAffordanceViewDataSource, SCCheetahStoriesAffordanceViewDelegate, SCFeedMuteStateProvider;

@interface SCCheetahStoriesAffordanceView : UIView
{
    UITapGestureRecognizer *_storiesAffordanceTap;
    UIImageView *_storiesAffordanceCarat;
    UILabel *_label;
    CAGradientLayer *_gradient;
    id <SCCheetahStoriesAffordanceViewDelegate> _delegate;
    id <SCCheetahStoriesAffordanceViewDataSource> _dataSource;
    id <SCFeedMuteStateProvider> _feedMuteStateProvider;
    long long _sectionId;
    _Bool _isDisplayed;
    NSMutableDictionary *_processedStoryCache;
    SCFeedItemSkipStoryTracker *_skipStoryTracker;
    long long newStoriesButtonType;
}

@property(readonly, nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(readonly, nonatomic) long long sectionId; // @synthesize sectionId=_sectionId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hide;
- (void)show;
- (void)centerAndPositionStoriesAffordanceToVC:(struct CGSize)arg1;
- (long long)getLastVisibleIndex;
- (_Bool)_skippedStoryTrackerContains:(id)arg1;
- (_Bool)_viewModelIsMuted:(id)arg1;
- (_Bool)_processedStoryCacheContains:(id)arg1;
- (_Bool)_hasShownMutedOrSkippedStoryBefore:(id)arg1;
- (_Bool)shouldShow;
- (void)prepareForUnstaging;
- (void)prepareForShowingMoreNewStories;
- (void)prepareForShowingNewStories;
- (void)_setImage;
- (void)_setLabelText:(id)arg1;
- (double)height;
- (double)width;
- (void)_initializeShadow;
- (void)layoutSubviews;
- (double)radius;
- (struct CGSize)labelTextSize;
- (void)storiesAffordanceTapped;
- (void)_initializeSubviews;
- (id)initWithDelegate:(id)arg1 withDataSource:(id)arg2 withFeedSection:(long long)arg3 withSkipStoryTracker:(id)arg4 withMuteStateProvider:(id)arg5;

@end

