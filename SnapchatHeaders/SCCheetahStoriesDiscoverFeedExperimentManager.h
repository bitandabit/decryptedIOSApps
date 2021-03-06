//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, SCCheetahStoriesActionHandler, SCCheetahStoriesQueryCoordinator, SCCheetahStoriesView, SCCheetahTabStoriesViewController, SCSearchQueryResultController, SCUserSession;
@protocol SCCheetahStoriesDiscoverFeedExperiment;

@interface SCCheetahStoriesDiscoverFeedExperimentManager : NSObject <UIGestureRecognizerDelegate>
{
    SCUserSession *_userSession;
    NSMutableArray *_cotapPlaygroundHistory;
    id <SCCheetahStoriesDiscoverFeedExperiment> _activeExperiment;
    SCCheetahStoriesView *_cheetahStoryView;
    long long _activeDiscoverFeedInternalToolsType;
    long long _activeDiscoverFeedCarouselType;
    SCCheetahStoriesActionHandler *_actionHandler;
    SCCheetahStoriesQueryCoordinator *_queryCoordinator;
    SCSearchQueryResultController *_queryResultController;
    SCCheetahTabStoriesViewController *_cheetahTabStoriesViewController;
}

@property(nonatomic) __weak SCCheetahTabStoriesViewController *cheetahTabStoriesViewController; // @synthesize cheetahTabStoriesViewController=_cheetahTabStoriesViewController;
@property(nonatomic) __weak SCSearchQueryResultController *queryResultController; // @synthesize queryResultController=_queryResultController;
@property(nonatomic) __weak SCCheetahStoriesQueryCoordinator *queryCoordinator; // @synthesize queryCoordinator=_queryCoordinator;
@property(nonatomic) __weak SCCheetahStoriesActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long activeDiscoverFeedCarouselType; // @synthesize activeDiscoverFeedCarouselType=_activeDiscoverFeedCarouselType;
@property(nonatomic) long long activeDiscoverFeedInternalToolsType; // @synthesize activeDiscoverFeedInternalToolsType=_activeDiscoverFeedInternalToolsType;
@property(nonatomic) __weak SCCheetahStoriesView *cheetahStoryView; // @synthesize cheetahStoryView=_cheetahStoryView;
- (void).cxx_destruct;
- (void)didSwipeLeft:(id)arg1;
- (void)didTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_onCheetahStoryTappedForIndexPath:(id)arg1;
- (void)_renderDiscoverFeedTypeDescriptionLabel;
- (void)_switchToNextType;
- (void)_switchCarouselTypeFrom:(long long)arg1 to:(long long)arg2;
- (void)_switchInternalToolsTypeFrom:(long long)arg1 to:(long long)arg2;
- (void)onCheetahStoryRequestBuilt:(id)arg1;
- (_Bool)onCheetahStoriesViewPullToRefresh;
- (void)onCheetahStoryCellPostRenderedWithCell:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

